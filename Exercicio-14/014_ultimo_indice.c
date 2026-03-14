// PARADIGMAS DE PROGRAMAÇÃO - PROFº ALEX TORQUATO - FACULDADE IMPACTA
// ULTIMO ÍNDICE - EXRCÍCIO 014 - ATIVIDADE 01


#include <stdio.h> // biblioteca para usar printf e scanf

int ultimo_indice(const char *str, char c) // função que procura a última posição do caractere da palavra
{
    int i = 0; // variável para percorrer a palavra ---> ex.: sol
    int ultimo = -1; // guarda o último índice encontrado (-1 usado caso  não encontre um índice)

    while (str[i] != '\0') // percorre a string até chegar no final  '\0'
    {
        
        if (str[i] == c) // verifica se a letra atual é igual ao caractere procurado ---> ex>: l   sol
        { 
            ultimo = i; // guarda a posição onde encontrou o caractere ---> ex.: 2  sol
        }
        i++; // passa para a próxima letra 
    }

    return ultimo; // retorna o último índice encontrado
}

int main()
{
    char str[100]; // espaço que guarda a palavra digitada
    char c; // variável para guardar o caractere que vamos procurar

    printf("Digite a palavra: "); // pede uma palavra ---> ex.: sol
    scanf("%s", str); // lê a palavra

    printf("Digite o caractere: "); // pede o caractere que estamos procurar ---> ex.: l
    scanf(" %c", &c); // lê o caractere

    int resultado = ultimo_indice(str, c); // chama a função para procurar o caractere

    printf("Resultado: %d\n", resultado);  // mostra o índice encontrado ---> ex.: 2

    return 0; // finalizou
}