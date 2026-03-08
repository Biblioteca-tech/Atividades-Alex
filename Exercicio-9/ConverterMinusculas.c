#include <string.h>

void converter_para_minusculas(char *str) {
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}

int main() {
    char texto[] = "IARLEY MUITO BONITAO.";
    converter_para_minusculas(texto);
    printf("minúsculas: %s\n", texto);
    return 0;
}