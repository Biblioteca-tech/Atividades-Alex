// PARADIGMAS DE PROGRAMAÇÃO - PROFº ALEX TORQUATO - FACULDADE IMPACTA
// SUBSTITUIR CARACTERES - EXRCÍCIO 012 - ATIVIDADE 01

/**
 * @brief Substitui todas as ocorrências de um caractere por outro
 * @param str String a ser modificada
 * @param antigo Caractere a ser substituído
 * @param novo Novo caractere
 */


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
    // char texto[] = "Caio 2401371, Estevan 2400524, Iarley 2400918, Mikeias 2400176";
    // Testes :
    // Entrada     Antigo  Novo   Saída
    // "banana"    a       o     "bonono"
    // "teste"     e       i     "tisti"
    // "abc"       x       y     "abc"
    // "aaaa"      a       b     "bbbb"
    // "hello"     l       x     "hexxo"
    // ""          a       b     ""
    // "1231"      1       9     "9239"
    // "casa"      a       e     "cese"
    // "java"      j       J     "Java"
    // "abc"       c       d     "abd"

    char texto[100];// espaço para guardar a palavra digitada pelo usuário
    char antigo, novo; // variáveis para guardar os caracteres

    printf("Digite uma palavra: "); // pede para o usuário digitar uma palavra
    scanf("%s", texto); // lê a palavra digitada

    printf("Caractere a substituir: "); // pergunta qual letra será trocada --- ex.: banana --> a --> o
    scanf(" %c", &antigo); // lê o caractere que será substituído ---> ex.: a

    printf("Novo caractere: "); // pergunta qual será o novo caractere --> ex.: o
    scanf(" %c", &novo); // lê o novo caractere

    substituir_caractere(texto, antigo, novo); // chama a função que faz a troca

    printf("%s\n", texto); // mostra a palavra depois do troca troca

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