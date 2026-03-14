/**
 * @brief Conta o número de consoantes (letras que não são vogais)
 * @note Ignora espaços, dígitos, pontuação e outros caracteres não-letra
 * @param str Ponteiro para a string terminada em '\0'
 * @return Número de consoantes encontradas
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int contar_consoantes(const char *str) { //O const significa que a função promete não modificar a string recebida. *str o caractere que está nesse endereço.
    int contador = 0;
    while (*str) { //Continue enquanto o caractere atual não for o final da string ('\0').
        char c = *str;

        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z' )) {

            if (c >= 'A' && c <= 'Z') {
                c = c + 32;
            }
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                contador++;
            }
            
        }
        str++; //str++ move o ponteiro para o próximo caractere da string.
    }
    return contador;
}

int main() {
    //char texto[] = "Caio 2401371, Estevan 2400524, Iarley 2400918, Mikeias 2400176"; // 4 letras maiúsculas, também funciona para mais de uma palavra e com números
    //char texto[] = "@#Maria"; //2 consoantes
    //char texto[] = ""; //0 consoantes
    //char texto[] = "abc"; //2 consoante
    //char texto[] = "aeiou"; //0 consoantes
    //char texto[] = "xyz"; //3 consoantes
    //char texto[] = "Casa"; //2 consoantes
    //char texto[] = "Programacao"; //6 consoantes
    //char texto[] = "HELLO"; //3 consoantes
    //char texto[] = "123abc"; //2 consoantes
    //char texto[] = "A B C"; //2 consoantes
    char texto[] = "!!"; //0 consoantes
    int totalConsoantes = contar_consoantes(texto);
    printf("%d\n", totalConsoantes);
    return 0;
}