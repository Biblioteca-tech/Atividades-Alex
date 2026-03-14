#include <stdio.h>
#include <string.h>
#include <ctype.h>

int contarPalavras(char *str) {
    int contador = 0;
    int emPalavra = 0;

    while (*str) {
        if (isalpha(*str)) {
            if (!emPalavra) {
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
    char texto[] = "Oi meu nome outro e Mikeias dele Lima Lopes Dell E E";
    int totalPalavras = contarPalavras(texto);
    printf("Total de palavras: %d\n", totalPalavras);
    return 0;
}
