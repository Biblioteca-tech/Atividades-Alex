// PARADIGMAS DE PROGRAMAÇÃO - PROFº ALEX TORQUATO - FACULDADE IMPACTA
// CAPITALIZAR PALAVRAS - EXRCÍCIO 020 - ATIVIDADE 01

#include <stdio.h> // biblioteca para usar printf e scanf

void capitalizar_palavras(char *str) {

    int i = 0; // variável usada para percorrer a string

    if (str[0] >= 'a' && str[0] <= 'z') { // verifica se a primeira letra é minúscula
        str[0] = str[0] - ('a' - 'A'); // converte a primeira letra para maiúscula
    }
    while (str[i] != '\0') { // percorre a string até o final

        if (str[i] == ' ') { // verifica se encontrou um espaço
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z') { // verifica se a próxima letra é minúscula
                str[i + 1] = str[i + 1] - ('a' - 'A'); // transforma a próxima letra em maiúscula
            }
        }
        i++; // avança para o próximo caractere
    }
}

int main() {

    char texto[100]; // aquipara armazena a frase/palavra

    printf("Digite uma frase: "); // pede ao usuário que digite uma frase/palavra
    fgets(texto, sizeof(texto), stdin); // lê a frase digitada
    capitalizar_palavras(texto); // chama a função que capitaliza as palavras

    printf("Resultado: %s", texto); // mostra a frase modificada

    return 0; // finalizou
}