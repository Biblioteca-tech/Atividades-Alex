/**
 * @brief Conta quantos dígitos (0-9) existem na string
 * @param str String a ser analisada
 * @return Quantidade de caracteres numéricos
 */

#include <stdio.h>      
#include <string.h>     

int contar_digitos(const char *str) {   
    
    int i = 0;        // variável usada para percorrer cada posição da string
    int contador = 0; // variável que guarda quantos dígitos foram encontrados

    while (str[i] != '\0') {  // percorre a string até encontrar o caractere final '\0'
        
        if (str[i] >= '0' && str[i] <= '9') {  // verifica se o caractere atual é um número
            contador++;  // se for número, aumenta o contador
        }

        i++;  // passa para o próximo caractere da string
    }

    return contador;  // retorna a quantidade total de dígitos encontrados
}


int main() {

    // lista de testes com várias strings diferentes
    char *testes[] = {
        "123",
        "abc",
        "a1b2c3",
        "000",
        "abc123",
        "",
        "1a2b3c4",
        "9",
        "teste1",
        "123abc456"
    };

    int quantidade_testes = 10; // quantidade de strings de teste
    int i; // variável para percorrer os testes

    for (i = 0; i < quantidade_testes; i++) {  // percorre todos os testes
        int resultado = contar_digitos(testes[i]);  // chama a função para cada string
        printf("Entrada: \"%s\" -> Digitos: %d\n", testes[i], resultado);  // imprime resultado
    }

    return 0;  // finaliza o programa
}