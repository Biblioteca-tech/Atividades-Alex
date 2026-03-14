#include <stdio.h>

/**
 * @brief Substitui todas as ocorrências de um caractere por outro
 * @param str String a ser modificada
 * @param antigo Caractere a ser substituído
 * @param novo Novo caractere
 */
void substituir_caractere(char *str, char antigo, char novo) {
    while (*str) {
        if (*str == antigo || *str == antigo + 32 || *str == antigo - 32) {
            *str = novo;
        }
        str++;
    }
}

int main() {
    char texto[] = "bAnana";
    substituir_caractere(texto, 'a', 'x');
    printf("Resultado: %s\n", texto); // Saída: bxnxnx
    return 0;
}