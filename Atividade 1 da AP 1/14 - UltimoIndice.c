// PARADIGMAS DE PROGRAMAÇÃO - PROFº ALEX TORQUATO - FACULDADE IMPACTA
// ULTIMO ÍNDICE - EXRCÍCIO 014 - ATIVIDADE 01

// ENUNCIADO DO EXERCÍCIO:

 //@brief Retorna a posição da última ocorrência de um caractere
 //@param str String onde procurar
 //@param c Caractere procurado
 //@return Índice (0-based) ou -1 se não encontrado

 //RESOLUÇÃO DO EXERCÍCIO:

#include <stdio.h> // biblioteca para usar printf

int ultimo_indice(const char *str, char c) // função que procura a última posição do caractere da palavra
{
    int i = 0; // variável para percorrer a palavra
    int ultimo = -1; // guarda o último índice encontrado (-1 usado caso não encontre)

    while (str[i] != '\0') // percorre a string até chegar no final '\0'
    {
        
        if (str[i] == c) // verifica se a letra atual é igual ao caractere procurado
        { 
            ultimo = i; // guarda a posição onde encontrou o caractere
        }
        i++; // passa para a próxima letra
    }

    return ultimo; // retorna o último índice encontrado
}

int main()
{
    char *entradas[] = { // lista de palavras usadas nos testes
        "banana",
        "banana",
        "banana",
        "banana",
        "",
        "abc",
        "hello",
        "aaaa",
        "teste",
        "xyz"
    };

    char caracteres[] = { // caracteres que vamos procurar
        'a','b','n','x','a','c','l','a','t','z'
    };

    int quantidade_testes = 10; // quantidade de testes

    for (int i = 0; i < quantidade_testes; i++) // percorre todos os testes
    {
        int resultado = ultimo_indice(entradas[i], caracteres[i]); // chama a função para procurar o caractere

        printf("ENTRADA: \"%s\"\n", entradas[i]); // mostra a palavra
        printf("CARACTERE: %c\n", caracteres[i]); // mostra o caractere procurado
        printf("SAIDA: %d\n\n", resultado); // mostra o índice encontrado
    }

    return 0; // finalizou
}