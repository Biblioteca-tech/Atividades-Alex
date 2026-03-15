/**
 * @brief Verifica se a string contém apenas dígitos (0-9)
 * @param str String a ser verificada
 * @return 1 se for estritamente numérica, 0 caso contrário
 */

#include <stdio.h>
#include <string.h>

int eh_numerico(const char *str) {
    
    int i = 0;                    // variável usada para percorrer a string

    if (str[0] == '\0') {         // verifica se a string está vazia
        return 1;                 // string vazia é considerada numérica de acordo com testes enviado (na linha 5)
    }

    while (str[i] != '\0') {      // percorre todos os caracteres da string
        
        if (str[i] < '0' || str[i] > '9') { // verifica se o caractere NÃO está entre '0' e '9'
            return 0;                       // se encontrar algo que não é dígito, retorna 0
        }

        i++;                     // avança para o próximo caractere
    }

    return 1;                    // se todos forem dígitos, retorna 1
}

int main() {

    // Lista de entradas para teste
    char *testes[] = {
        "123",
        "00123",
        "abc",
        "123abc",
        "",
        "9",
        "12 3",
        "000",
        "a1",
        "4567"
    };

    int quantidade_testes = 10; // quantidade de testes

    for (int i = 0; i < quantidade_testes; i++) { // percorre todos os testes

        int resultado = eh_numerico(testes[i]); // chama a função

        printf("Entrada: \"%s\" -> Resultado: %d\n", testes[i], resultado); // imprime resultado
    }

    return 0; // finaliza o programa
}