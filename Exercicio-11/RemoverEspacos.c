#include <stdio.h>
#include <string.h>

void remover_espacos_extras(char *str) {
    char *p = str;
    while (*p) {
        if (*p != ' ') {
            *str++ = *p;
        }
        p++;
    }
    *str = '\0';
}

int main() {
    char texto[] = "Ainda tem que ajustar essa função";
    remover_espacos_extras(texto);
    printf("Texto sem espaços: %s\n", texto);
    return 0;
}
