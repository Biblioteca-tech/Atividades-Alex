/**
 * @brief Conta quantas letras maiúsculas (A-Z) existem na string
 * @param str Ponteiro para a string terminada em '\0'
 * @return Quantidade de letras maiúsculas
 */

#include <stdio.h>
#include <ctype.h>

int contar_letras_maiusculas(const char *str) { //O const significa que a função promete não modificar a string recebida. *str o caractere que está nesse endereço.
    int contador = 0;
    while (*str) { //Continue enquanto o caractere atual não for o final da string ('\0').
        if (*str >= 'A' && *str <= 'Z') { //verificação se é uma letra ou não.
            contador ++;
        }
        str++;
    }
    return contador;
}

int main() {
    //char texto[] = "Caio 2401371, Estevan 2400524, Iarley 2400918, Mikeias 2400176"; // 4 letras maiúsculas, também funciona para mais de uma palavra e com números
    //char texto[] = "Exemplo de Texto com Letras Maiúsculas."; //4 letras maiúsculas
    //char texto[] = ""; //0 letras maiúsculas
    //char texto[] = "abc"; //0 letras maiúsculas
    //char texto[] = "ABC"; //3 letras maiúsculas
    //char texto[] = "AbC"; //2 letras maiúsculas
    //char texto[] = "Hello World"; //2 letras maiúsculas
    //char texto[] = "123ABC"; //3 letras maiúsculas
    //char texto[] = "programacao"; //0 letras maiúsculas
    //char texto[] = "TESTE"; //5 letras maiúsculas
    //char texto[] = "JavaScript"; //2 letras maiúsculas
    char texto[] = "!@#A"; //1 letras maiúsculas
    int totalMaiusculas = contar_letras_maiusculas(texto);
    printf("%d\n", totalMaiusculas);
    return 0;
}