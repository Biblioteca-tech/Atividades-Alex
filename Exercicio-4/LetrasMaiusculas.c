#include <stdio.h>
#include <ctype.h>

int contar_letras_maiusculas(const char *str) {
    int contador = 0;
    while (*str) {
        if (isupper(*str)) {
            contador ++;
        }
        str++;
    }
    return contador;
}

int main() {
    char texto[] = "Exemplo de Texto com Letras MAiúscuLas.";
    int totalMaiusculas = contar_letras_maiusculas(texto);
    printf("Total de letras maiúsculas: %d\n", totalMaiusculas);
    return 0;
}
