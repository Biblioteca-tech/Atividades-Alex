/**
 * @brief Conta quantas vezes um determinado caractere aparece na string
 * @param str Ponteiro para a string terminada em '\0'
 * @param c Caractere a ser procurado
 * @return Número de ocorrências do caractere
 */

#include <stdio.h> 
#include <string.h>
#include <ctype.h>

int contar_ocorrencias(const char *str, char c) {
    int contador = 0;

    while (*str) {//Continue enquanto o caractere atual não for o final da string ('\0').
        if ((*str) == (c)) {
            contador++;
        }
        str++;
    }
    return contador;
}

int main() {
    //char texto[] = "Caio 2401371, Estevan 2400524, Iarley 2400918, Mikeias 2400176"; // 4 letras "e" ou "7" duas vezes, também funciona para mais de uma palavra e com números
    //char c = 'e';
    //char c = '7';
    
    //char texto[] = "Coisas ruins acontecem com pessoas boas, será?."; //1 ocorrencia da letra "p"
    //char c = 'p';

    //char texto[] = "banana"; //3 ocorrencias da letra "a"
    //char c = 'a';

    //char texto[] = "banana"; //1 ocorrencia da letra "b"
    //char c = 'b';

    //char texto[] = "banana"; //0 ocorrencias da letra "x"
    //char c = 'x';

    //char texto[] = ""; //0 ocorrencias da letra "a"
    //char c = 'a';

    //char texto[] = "aaaaa"; //5 ocorrencias da letra "a"
    //char c = 'a';

    //char texto[] = "Casa"; //2 ocorrencias da letra "a"
    //char c = 'a';

    //char texto[] = "Hello"; //2 ocorrencias da letra "l"
    //char c = 'l';

    //char texto[] = "123123"; //2 ocorrencias do númuro "1"
    //char c = '1';

    //char texto[] = "test"; //2 ocorrencias da letra "t"
    //char c = 't';

    char texto[] = "ABC"; //0 ocorrencias da letra "a"
    char c = 'a';

    int totalOcorrencias = contar_ocorrencias(texto, c);
    printf("%d\n", totalOcorrencias);
    return 0;
}