// PARADIGMAS DE PROGRAMAÇÃO - PROFº ALEX TORQUATO - FACULDADE IMPACTA
// É/NÃO ANAGRAMA - EXRCÍCIO 016 - ATIVIDADE 01


#include <stdio.h> // biblioteca para usar printf e scanf

int eh_anagrama(const char *a, const char *b) { // Função que verifica se duas palavras são anagramas

    int i, j;
    int usadas[100] = {0}; // marca quais letras da segunda palavra já foram usadas
    int tamanho_a = 0; // tamanho da primeira palavra
    int tamanho_b = 0; // tamanho da segunda palavra
    int encontrou; // variável para saber se encontrou a letra

    while (a[tamanho_a] != '\0') { // descobrir o tamanho da primeira palavra
        tamanho_a++;
    }
    while (b[tamanho_b] != '\0') { // descobrir o tamanho da segunda palavra
        tamanho_b++;
    }
    if (tamanho_a != tamanho_b) { // se os tamanhos forem diferentes, não são anagramas
        return 0;
    }
    for (i = 0; i < tamanho_a; i++) { // percorre cada letra da primeira palavra

        encontrou = 0; // diz que não encontrou

        for (j = 0; j < tamanho_b; j++) { // procura essa letra na segunda palavra

            if (a[i] == b[j] && usadas[j] == 0) { // verifica se a letra for igual e ainda não foi usada

                usadas[j] = 1; // marca que essa letra já foi usada
                encontrou = 1; // diz que encontrou a letra
                break; // sai do while
            }
        }

        if (!encontrou) { // se não encontrou a letra correspondente não são anagramas
            return 0;
        }
    }

    return 1; // são anagramas
}

int main() {

    char a[100]; // primeira palavra
    char b[100]; // segunda palavra

    printf("Digite a primeira palavra: "); // usuario digita uma palavra
    scanf("%s", a); // lê a palavra

    printf("Digite a segunda palavra: "); // usuário digita outra palavara
    scanf("%s", b); //lê a palavra

    
    if (eh_anagrama(a, b)) { // verifica se são anagramas
        printf("1\n"); // são anagramas
    } else {
        printf("0\n"); // não são anagramas
    }

    return 0; //finalizou
}