/**
 * @brief Converte todos os caracteres da string para minúsculas
 * @param str String a ser modificada (deve ser modificável)
 */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

char minuscula(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

void converter_para_minusculas(char *str) {
    while (*str) {
        *str = minuscula(*str);
        str++;
    }
}

int main() {
    //char texto[] = "Caio 2401371, Estevan 2400524, Iarley 2400918, Mikeias 2400176"; // 4 letras maiúsculas, também funciona para mais de uma palavra e com números
    //char texto[] = "Conhecimento Mútuo: Se você conhece o inimigo e a si mesmo, não precisa temer o resultado de cem batalhas";
    //char texto[] = "ABC";
    //char texto[] = "hELLO";
    //char texto[] = "123ABC";
    //char texto[] = "TESTE";
    //char texto[] = "ABC";
    //char texto[] = "AbCd";
    //char texto[] = "";
    //char texto[] = "OLA MUNDO";
    //char texto[] = "JAVA";
    char texto[] = "C123";
    converter_para_minusculas(texto);
    printf("%s\n", texto);
    return 0;
}