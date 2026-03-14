/**
 * @brief Converte todos os caracteres da string para maiúsculas
 * @param str String a ser modificada (deve ser modificável)
 */

#include <stdio.h>
#include <ctype.h>

char maiuscula(char c) { // função para poder converter minuscula em maiuscula.
    if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

void converter_para_maiusculas(char *str) {
    while (*str) { //Continue enquanto o caractere atual não for o final da string ('\0').
        *str = maiuscula(*str);
        str++;
    }

}

int main() {
    //char texto[] = "Caio 2401371, Estevan 2400524, Iarley 2400918, Mikeias 2400176"; // 4 letras maiúsculas, também funciona para mais de uma palavra e com números
    //char texto[] = "A Arte da Guerra.";
    //char texto[] = "abc"; //ABC
    //char texto[] = "Hello"; //HELLO
    //char texto[] = "123abc"; //123ABC
    //char texto[] = "teste"; //TESTE
    //char texto[] = "ABC"; //ABC
    //char texto[] = "aBcD"; //ABCD
    //char texto[] = ""; //
    //char texto[] = "ola mundo"; //OLA MUNDO
    //char texto[] = "java"; //JAVA
    char texto[] = "c123"; //C123
    converter_para_maiusculas(texto);
    printf("%s\n", texto);
    return 0;
}