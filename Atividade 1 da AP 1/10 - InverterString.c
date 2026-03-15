// PARADIGMAS DE PROGRAMAÇÃO - PROFº ALEX TORQUATO - FACULDADE IMPACTA
// INVERTER PALAVRAS - EXERCÍCIO 010 - ATIVIDADE 01


// ENUNCIADO DO EXERCÍCIO:

// @brief Inverte a ordem dos caracteres da string (in-place)
// @param str String a ser invertida (deve ser modificável)
// void inverter_string(char *str); 


//RESOLUÇÃO DO EXERCÍCIO:


#include <stdio.h> // biblioteca para usar printf

void inverter_string(char *str) { // função que inverte a string

    int inicio = 0; // posição inicial
    int fim = 0; // posição final
    char temp; // variável usada para trocar caracteres

    while (str[fim] != '\0') { // encontra o final da string
        fim++; // avança
    }

    fim--; // volta uma posição para pegar o último caractere

    while (inicio < fim) { // enquanto o início for menor que o fim
        temp = str[inicio]; // guarda o caractere inicial
        str[inicio] = str[fim]; // coloca o final no início
        str[fim] = temp; // coloca o guardado no final
        inicio++; // avança início
        fim--; // recua fim
    }
}

int main() {

    char *entradas[] = { // lista de testes
        "abc",
        "hello",
        "a",
        "",
        "12345",
        "ab",
        "teste",
        "programa",
        "xyz",
        "abcd"
    };

    int total = 10; // quantidade de testes

    for (int i = 0; i < total; i++) { // percorre os testes

        char palavra[100]; // buffer para copiar a palavra
        int j = 0;

        while (entradas[i][j] != '\0') { // copia a string
            palavra[j] = entradas[i][j];
            j++;
        }

        palavra[j] = '\0'; // finaliza string

        inverter_string(palavra); // chama a função

        printf("ENTRADA: \"%s\"\n", entradas[i]); // mostra a entrada
        printf("SAIDA: \"%s\"\n\n", palavra); // mostra a saída

    }

    return 0; // finaliza
}