/**
 * @brief Retorna a posição da primeira ocorrência de um caractere
 * @param str String onde procurar
 * @param c Caractere procurado
 * @return Índice (0-based) ou -1 se não encontrado
 */

#include <stdio.h>
#include <string.h>

int primeiro_indice(const char *str, char c) {   // função que procura a primeira ocorrência de um caractere
    int i = 0;                                   // índice para percorrer a string

    while (str[i] != '\0') {                     // percorre a string até o final
        if (str[i] == c) {                       // verifica se encontrou o caractere
            return i;                            // retorna a posição
        }
        i++;                                     // avança para o próximo caractere
    }

    return -1;                                   // se não encontrou, retorna -1
}

int main() {

    // Lista de strings de teste
    char *textos[] = {
        "banana",
        "banana",
        "banana",
        "banana",
        "",
        "abc",
        "hello",
        "aaaa",
        "teste",
        "xyz"
    };

    // Lista de caracteres que serão procurados
    char caracteres[] = {
        'a',
        'b',
        'n',
        'x',
        'a',
        'c',
        'l',
        'a',
        't',
        'z'
    };

    int quantidade_testes = 10; // quantidade de testes

    for (int i = 0; i < quantidade_testes; i++) { // percorre todos os testes

        int resultado = primeiro_indice(textos[i], caracteres[i]); // chama a função

        printf("Texto: \"%s\" | Caractere: '%c' -> Indice: %d\n",
               textos[i], caracteres[i], resultado); // imprime resultado
    }

    return 0; // finaliza o programa
}