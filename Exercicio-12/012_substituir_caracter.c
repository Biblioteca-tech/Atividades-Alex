// PARADIGMAS DE PROGRAMAÇÃO - PROFº ALEX TORQUATO - FACULDADE IMPACTA
// SUBSTITUIR CARACTERES - EXRCÍCIO 012 - ATIVIDADE 01

// ENUNCIADO DO EXERCÍCIO:

 // @brief Substitui todas as ocorrências de um caractere por outro
 // @param str String a ser modificada
 // @param antigo Caractere a ser substituído
 // @param novo Novo caractere
 
 //RESOLUÇÃO DO EXERCÍCIO:

#include <stdio.h> // biblioteca para usar printf 

void substituir_caractere(char *str, char antigo, char novo) { // função que substitui caracteres

    int i = 0; // variável que vai percorrer toda a palavra ---> ex.: banana

    while (str[i] != '\0') { // percorre a palavra até o final da string
        if (str[i] == antigo) { // verifica se a letra atual (ex.: a) é igual ao caractere que quero trocar (ex.: o)
            str[i] = novo; // se for igual, substitui pelo novo caractere
        }
        i++; // passa para a próxima letra da palavra (b a n a n a)
    }
}

int main() {

    char *entradas[] = { // lista de palavras para teste
        "banana",
        "teste",
        "abc",
        "aaaa",
        "hello",
        "",
        "1231",
        "casa",
        "java",
        "abc"
    };

    char antigos[] = { // caracteres antigos
        'a','e','x','a','l','a','1','a','j','c'
    };

    char novos[] = { // novos caracteres
        'o','i','y','b','x','b','9','e','J','d'
    };

    int total = 10; // quantidade de testes

    for (int i = 0; i < total; i++) { // percorre todos os testes

        char palavra[100]; // buffer para copiar a palavra
        int j = 0;

        while (entradas[i][j] != '\0') { // copia a string manualmente
            palavra[j] = entradas[i][j];
            j++;
        }

        palavra[j] = '\0'; // finaliza a string

        substituir_caractere(palavra, antigos[i], novos[i]); // chama a função

        printf("ENTRADA: \"%s\"\n", entradas[i]); // mostra entrada
        printf("ANTIGO: '%c'\n", antigos[i]); // mostra caractere antigo
        printf("NOVO: '%c'\n", novos[i]); // mostra caractere novo
        printf("SAIDA: \"%s\"\n\n", palavra); // mostra resultado
    }

    return 0; // finalizou
}



//RESULTADO DOS TESTES:

//ENTRADA: "banana"
//ANTIGO: 'a'
//NOVO: 'o'
//SAIDA: "bonono"

//ENTRADA: "teste"
//ANTIGO: 'e'
//NOVO: 'i'
//SAIDA: "tisti"

//ENTRADA: "abc"
//ANTIGO: 'x'
//NOVO: 'y'
//SAIDA: "abc"

//ENTRADA: "aaaa"
//ANTIGO: 'a'
//NOVO: 'b'
//SAIDA: "bbbb"

//ENTRADA: "hello"
//ANTIGO: 'l'
//NOVO: 'x'
//SAIDA: "hexxo"

//ENTRADA: ""
//ANTIGO: 'a'
//NOVO: 'b'
//SAIDA: ""

//ENTRADA: "1231"
//ANTIGO: '1'
//NOVO: '9'
//SAIDA: "9239"

//ENTRADA: "casa"
//ANTIGO: 'a'
//NOVO: 'e'
//SAIDA: "cese"

//ENTRADA: "java"
//ANTIGO: 'j'
//NOVO: 'J'
//SAIDA: "Java"

//ENTRADA: "abc"
//ANTIGO: 'c'
//NOVO: 'd'
//SAIDA: "abd"