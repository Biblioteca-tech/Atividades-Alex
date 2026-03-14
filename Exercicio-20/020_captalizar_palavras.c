// PARADIGMAS DE PROGRAMAÇÃO - PROFº ALEX TORQUATO - FACULDADE IMPACTA
// CAPITALIZAR PALAVRAS - EXRCÍCIO 020 - ATIVIDADE 01

//ENUNCIADO DO EXERCÍCIO:

//@brief Capitaliza a primeira letra de cada palavra
//@note Considera palavras separadas por espaços
//@param str String a ser modificada (deve ser modificável)
//@example "ola mundo" → "Ola Mundo"

//RESOLUÇÃO DO EXERCÍCIO:

#include <stdio.h> // biblioteca para usar printf

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

    char *entradas[] = { // lista de frases usadas nos testes
        "ola mundo",
        "java programming",
        "hello world",
        "a b c",
        "teste",
        "programacao em c",
        "",
        "abc def ghi",
        "open ai",
        "estrutura de dados"
    };

    int quantidade_testes = 10; // quantidade de testes

    for (int i = 0; i < quantidade_testes; i++) { // percorre todos os testes

        char frase[100]; // espaço para copiar a frase
        int j = 0; // variável para copiar caractere por caractere

        while (entradas[i][j] != '\0') { // copia a frase da lista
            frase[j] = entradas[i][j]; // copia cada letra
            j++; // passa para a próxima posição
        }

        frase[j] = '\0'; // finaliza a string

        capitalizar_palavras(frase); // chama a função que capitaliza as palavras

        printf("ENTRADA: \"%s\"\n", entradas[i]); // mostra a frase original
        printf("SAIDA: \"%s\"\n\n", frase); // mostra a frase modificada
    }

    return 0; // finalizou
}