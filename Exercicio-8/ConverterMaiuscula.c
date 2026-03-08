#include <string.h>

void converter_para_maiusculas(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }

}

int main() {
    char texto[] = "iarley muito bonitao.";
    converter_para_maiusculas(texto);
    printf("Texto em maiúsculas: %s\n", texto);
    return 0;
}