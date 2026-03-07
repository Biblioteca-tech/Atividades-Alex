#include <stdio.h>
#include <ctype.h>

int contarConsoantes(char *str) {
    int contador = 0;
    while (*str) {
        char c = tolower(*str);
        if (isalpha(c) && !strchr("aeiouAEIOU", c)) {
            contador++;
        }
        str++;
    }
    return contador;
}

int main() {
    char texto[] = "@#Maria";
    int totalConsoantes = contarConsoantes(texto);
    printf("Total de consoantes: %d\n", totalConsoantes);
    return 0;
}