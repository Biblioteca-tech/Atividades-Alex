#include <string.h>

void converter_para_minusculas(char *str) {
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + 32;
        }
        str++;
    }
}

int main() {
    char texto[] = "IARLEY MUITO.";
    converter_para_minusculas(texto);
    printf("minúsculas: %s\n", texto);
    return 0;
}