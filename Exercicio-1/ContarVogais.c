#include <string.h>
#include <stdio.h>

int contar_vogais(const char *str) {
    int contador = 0;

    while (*str != '\0') {
        if (strchr("aeiouAEIOU", *str)) {
            contador++;
        }
        str++;
    }
    return contador;
}
int main() {
    char texto[] = "Iarley";
    int resultado = contar_vogais(texto);
    printf("Numero de vogais: %d\n", resultado);

    return 0;
}