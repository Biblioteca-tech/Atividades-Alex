// PARADIGMAS DE PROGRAMAÇÃO - PROFº ALEX TORQUATO - FACULDADE IMPACTA
// INVERTER PALAVRAS - EXRCÍCIO 010 - ATIVIDADE 01


#include <stdio.h> // biblioteca para usar printf e scanf

void inverter_string(char *str) { // função usada que invesrte a palavra

    int inicio = 0; // posição inicial da palavra
    int fim = 0; // posição final da palavra
    char temp; // usado para trocar as letras de posição

    while (str[fim] != '\0') { // descobrir o tamanho da palavra
        fim++; // anda até encontrar o final da strin
    }
    fim = fim - 1; // volta uma posição para pegar a última letra

    while (inicio < fim) { // enquanto o começo for menor que o final
        temp = str[inicio]; // aqui ela guarda a letra do começo
        str[inicio] = str[fim]; // aui ela coloca a letra do final no começo
        str[fim] = temp; // aqui ela coloca a letra guardada no final
        inicio++; // anda uma posição para frente
        fim--; // anda uma posição para trás
    }
}

int main() {

    char texto[100]; // é o local para armazenar a palavra

    printf("Digite uma palavra: "); // pede qu o usuário digite uma palavra
    scanf("%s", texto); // vvai ler a palavra digitada
    inverter_string(texto); // vai chamar a função que inverte
    printf("String invertida: %s\n", texto); // vai mostrar a palavra invertida

    return 0; // Finaizou
}