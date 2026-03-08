#include <string.h>
#include <ctype.h>

int contar_ocorrencias(const char *str, char c) {
    int contador = 0;

    while (*str) {
        if (tolower(*str) == tolower(c)) {
            contador++;
        }
        str++;
    }
    return contador;
}

int main() {
    char texto[] = "Coisas ruins acontecem com pessoas boas.";
    char c = 'p';
    int totalOcorrencias = contar_ocorrencias(texto, c);
    printf("Total de ocorrencias do caractere '%c': %d\n", c, totalOcorrencias);
    return 0;
}
