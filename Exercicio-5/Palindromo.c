/**
 * @brief Verifica se a string é um palíndromo
 * @note Ignora maiúsculas/minúsculas, espaços e caracteres não-alfabéticos
 * @param str Ponteiro para a string terminada em '\0'
 * @return 1 se for palíndromo, 0 caso contrário
 */

#include <stdio.h> 
#include <string.h>
#include <ctype.h>

int eh_letra(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

char minuscula(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

int eh_palindromo(const char *str) { //O const significa que a função promete não modificar a string recebida. *str o caractere que está nesse endereço.
    int inicio = 0;
    int fim = strlen(str) - 1; //strlen(str) retorna o tamanho da string como se fosse o "len()" do Python.

    while (inicio < fim) {
        while (inicio < fim && !eh_letra(str[inicio])) {
            inicio++;
        }
        while (inicio < fim && !eh_letra(str[fim])) {
            fim--;
        }
        if ((minuscula(str[inicio]) != minuscula(str[fim]))) {
            return 0;
        }
        inicio++;
        fim--;
    }
    return 1;
}
int main() {
    //char texto[] = "Caio 2401371, Estevan 2400524, Iarley 2400918, Mikeias 2400176"; // não é um palíndromo.
    //char texto[] = "SocorramMeSubiNoOnibusEmMarrocos"; //Socorram-me Subi No Ônibus Em Marrocos é um palíndromo
    //char texto[] = "Ana"; //Ana é um palíndromo
    //char texto[] = "ovo"; //é um palíndromo
    //char texto[] = "arara"; //é um palíndromo
    //char texto[] = "casa"; //não é palíndromo
    //char texto[] = "Ame a ema"; //é um palíndromo
    //char texto[] = "Socorram me subi no onibus em Marrocos"; //é um palíndromo
    //char texto[] = "abcba"; //é um palíndromo
    //char texto[] = "abcd"; //não é palíndromo
    //char texto[] = ""; //é um palíndromo
    //char texto[] = "a"; //é um palíndromo
    char texto[] = "Ovo"; //é um palíndromo
    printf("%d\n", eh_palindromo(texto));
}