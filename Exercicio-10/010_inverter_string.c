/**
 * @brief Inverte a ordem dos caracteres da string (in-place)
 * @param str String a ser invertida (deve ser modificável)
 */


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
    //char texto[] = "Caio 2401371, Estevan 2400524, Iarley 2400918, Mikeias 2400176";
    //char texto[] = "abc"; saida: cba
    //char texto[] = "hello"; saida: olleh
    //char texto[] = "a"; saida: a
    //char texto[] = ""; saida: ""
    //char texto[] = "12345"; saida: 54321
    //char texto[] = "ab"; saida: ba
    //char texto[] = "teste"; saida: etset
    //char texto[] = "programa"; saida: amargorp
    //char texto[] = "xyz"; saida: zyx
    //char texto[] = "abcd"; saida: dcba

    char texto[100]; // é o local para armazenar a palavra

    printf("Digite uma palavra: "); // pede que o usuário digite uma palavra
    scanf("%s", texto); // vai ler a palavra digitada
    inverter_string(texto); // vai chamar a função que inverte
    printf("%s\n", texto); // vai mostrar a palavra invertida
}