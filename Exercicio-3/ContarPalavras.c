/**
 * @brief Conta o número de palavras na string
 * @note Palavras são separadas por espaços, tabs ou quebras de linha
 * @note Considera múltiplos separadores consecutivos como um só
 * @param str Ponteiro para a string terminada em '\0'
 * @return Número de palavras (0 se string vazia ou só espaços)
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contar_palavras(const char *str) { //O const significa que a função promete não modificar a string recebida. *str o caractere que está nesse endereço.
    int contador = 0;
    int emPalavra = 0;

    while (*str) { //Continue enquanto o caractere atual não for o final da string ('\0').
        char c = *str;
        if (c != ' ' && c != '\t' && c != '\n') { 
            if (!emPalavra) { // para emPalavra = 0: não estamos dentro de uma palavra, para emPalavra = 1: estamos dentro de uma palavra. 0 = false, 1 = true
                emPalavra = 1;
                contador++;
            }
        } else {
            emPalavra = 0;
        }
        str++;
    }
    return contador;
}

int main() {
    //char texto[] = "Caio 2401371, Estevan 2400524, Iarley 2400918, Mikeias 2400176"; // 4 letras maiúsculas, também funciona para mais de uma palavra e com números
    //char texto[] = "Exemplo de texto para contar palavras."; // 6 palavras
    //char texto[] = ""; //0 palavras
    //char texto[] = "ola"; //1 palavras
    //char texto[] = "ola mundo"; //2 palavras
    //char texto[] = "ola mundo "; //2 palavras
    //char texto[] = " ola mundo"; //2 palavras
    //char texto[] = "um dois tres"; //3 palavras
    //char texto[] = "a b c d"; //4 palavras
    //char texto[] = "palavra"; //1 palavras
    //char texto[] = "linha1\nlinha2"; //2 palavras
    char texto[] = "b\tc\td"; //3 palavras
    int totalPalavras = contar_palavras(texto);
    printf("Total de palavras: %d\n", totalPalavras);
    return 0;
}