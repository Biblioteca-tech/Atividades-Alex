 /**
 * @brief Remove espaços extras: deixa apenas um espaço entre palavras,
 * remove espaços no início e no final da string
 * @param str String a ser normalizada (deve ser modificável)
 */

#include <stdio.h>
#include <string.h>

void remover_espacos_extras(char *str) {
    char *src = str;
    char *dst = str;
    int espaco_anterior = 1; // Começa como 1 para ignorar espaços no início

    while (*src) {
        if (*src != ' ') {
            *dst++ = *src;
            espaco_anterior = 0;
        } else if (!espaco_anterior) {
            *dst++ = ' ';
            espaco_anterior = 1;
        }
        src++;
    }
    // Remove espaço no final, se houver
    if (dst > str && *(dst - 1) == ' ') {
        dst--;
    }
    *dst = '\0';
}

int main() {
    //char texto[] = "Caio 2401371, Estevan 2400524, Iarley 2400918, Mikeias 2400176";
    //char texto[] = " ola mundo "; //saida: "ola mundo"
    //char texto[] = "ola mundo "; //saida: "ola mundo"
    //char texto[] = "ola mundo"; //saida: "ola mundo"
    //char texto[] = " teste"; //saida: "teste"
    //char texto[] = "teste "; //saida: "teste"
    char texto[] = "a b c"; // saida: "a b c"
    //char texto[] = ""; //saida: ""
    //char texto[] = " "; //saida: " "
    //char texto[] = "java c"; //saida: "java c"
    //char texto[] = "a b"; //saida: "a b"
    remover_espacos_extras(texto);
    printf("%s\n", texto);
    return 0;
}