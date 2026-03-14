// PARADIGMAS DE PROGRAMAÇÃO - PROFº ALEX TORQUATO - FACULDADE IMPACTA
// SUBSTITUIR CARACTERES - EXRCÍCIO 012 - ATIVIDADE 01


#include <stdio.h> // biblioteca para usar printf e scanf

void substituir_caractere(char *str, char antigo, char novo) { // função que troca um caractere por outro dentro da palavra

    int i = 0; // variável que vai percorrer toda a palavra  ---> ex.: banana

    while (str[i] != '\0') { // percorre a palavra até encontrar o final da string  '\0'
        if (str[i] == antigo) { // verifica se a letra atual (ex.: a) é igual ao caractere que quero trocar (ex.: o) 
            str[i] = novo; // se for igual, substitui pelo novo caractere
        }
        i++; // passa para a próxima letra da palavra (b a n a n a)
    }
}

int main() {

    char texto[100];// espaço para guardar a palavra digitada pelo usuário
    char antigo, novo; // variáveis para guardar os caracteres

    printf("Digite uma palavra: "); // pede para o usuário digitar uma palavra
    scanf("%s", texto); // lê a palavra digitada

    printf("Caractere a substituir: "); // pergunta qual letra será trocada --- ex.: banana --> a --> o
    scanf(" %c", &antigo); // lê o caractere que será substituído ---> ex.: a

    printf("Novo caractere: "); // pergunta qual será o novo caractere --> ex.: o
    scanf(" %c", &novo); // lê o novo caractere

    substituir_caractere(texto, antigo, novo); // chama a função que faz a troca

    printf("Resultado: %s\n", texto); // mostra a palavra depois do troca troca

    return 0; // finalizou
}