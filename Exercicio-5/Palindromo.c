#include <string.h>
#include <ctype.h>

int eh_palindromo(const char *str) {
    int inicio = 0;
    int fim = strlen(str) - 1;

    while (inicio < fim) {
        while (inicio < fim && !isalpha(str[inicio])) {
            inicio++;
        }
        while (inicio < fim && !isalpha(str[fim])) {
            fim--;
        }
        if (tolower(str[inicio]) != tolower(str[fim])) {
            return 0;
        }
        inicio++;
        fim--;
    }
    return 1;
}
int main() {
    char texto[] = "ovo";
    if (eh_palindromo(texto)) {
        printf("'%s' é um palíndromo.\n", texto);
    } else {
        printf("'%s' não é um palíndromo.\n", texto);
    }
    return 0;
}


