// PARADIGMAS DE PROGRAMAÇÃO - PROFº ALEX TORQUATO - FACULDADE IMPACTA
// É/NÃO ANAGRAMA - EXRCÍCIO 016 - ATIVIDADE 01

// ENUNCIADO DO EXERCÍCIO:

//@brief Verifica se duas strings são anagramas uma da outra
//@note Ignora maiúsculas/minúsculas e considera apenas letras
//@param a Primeira string
//@param b Segunda string
//@return 1 se forem anagramas, 0 caso contrário

//RESOLUÇÃO DO EXERCÍCIO:

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
                break; // sai do for
            }
        }

        if (!encontrou) { // se não encontrou a letra correspondente não são anagramas
            return 0;
        }
    }

    return 1; // são anagramas
}

int main() {

    char *entradas_a[] = { // lista das primeiras palavras dos testes
        "amor",
        "listen",
        "abc",
        "abc",
        "hello",
        "roma",
        "teste",
        "anagrama",
        "abc",
        "rat"
    };

    char *entradas_b[] = { // lista das segundas palavras dos testes
        "roma",
        "silent",
        "cab",
        "abcd",
        "world",
        "amor",
        "sete",
        "amaragan",
        "def",
        "tar"
    };

    int quantidade_testes = 10; // quantidade de testes

    for (int i = 0; i < quantidade_testes; i++) { // percorre todos os testes

        int resultado = eh_anagrama(entradas_a[i], entradas_b[i]); // chama a função para verificar se são anagramas

        printf("ENTRADA A: \"%s\"\n", entradas_a[i]); // mostra a primeira palavra
        printf("ENTRADA B: \"%s\"\n", entradas_b[i]); // mostra a segunda palavra
        printf("SAIDA: %d\n\n", resultado); // mostra o resultado
    }

    return 0; //finalizou
}