/**
 * @brief Conta o número de vogais (a,e,i,o,u,A,E,I,O,U) na string
 * @param str Ponteiro para a string terminada em '\0'
 * @return Número de vogais encontradas
 */

#include <string.h>
#include <stdio.h>

int contar_vogais(const char *str) { //O const significa que a função promete não modificar a string recebida. *str o caractere que está nesse endereço.
    int contador = 0;

    while (*str != '\0') { //enquanto não chegar ao final da palavra continua executando.
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            contador++;
        }
        str++; //str++ move o ponteiro para o próximo caractere da string.
    }
    return contador;
}
int main() {
    //char texto[] = "Caio 2401371, Estevan 2400524, Iarley 2400918, Mikeias 2400176"; // 4 letras maiúsculas, também funciona para mais de uma palavra e com números
    //char texto[] = "Iarley"; //3 vogais
    //char texto[] = ""; //0 vogais
    //char texto[] = "a"; //1 vogal
    //char texto[] = "abc"; //3 vogais
    //char texto[] = "AEIOU"; //5 vogais
    //char texto[] = "xyz"; //0 vogais
    //char texto[] = "Casa"; //2 vogais
    //char texto[] = "Programacao"; //5 vogais
    //char texto[] = "HELLO"; //2 vogais
    //char texto[] = "12345"; //0 vogais
    char texto[] = "a e i o u"; //5 vogais
    int resultado = contar_vogais(texto);
    printf("Número de vogais: %d\n", resultado);

    return 0;
}