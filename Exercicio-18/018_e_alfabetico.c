// PARADIGMAS DE PROGRAMAÇÃO - PROFº ALEX TORQUATO - FACULDADE IMPACTA
// É/NÃO ALFABÉTICO - EXRCÍCIO 018 - ATIVIDADE 01


#include <stdio.h> // biblioteca para usar printf e scanf

int eh_alfabetico(const char *str) { // função que verifica se a palavra tem APENAS letras  

    int i = 0; // variável usada para percorrer a palavra
 
    while (str[i] != '\0') { // percorre a palavra até encontrar o final da string   '\0'
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) { // verifica se o caractere NÃO está entre a-z ou A-Z
            return 0; // se encontrar número ou símbolo retorna 0
        }
        i++; // passa para a próxima letra
    }
    return 1; // se passou por tudo e só tinha letras, retorna 1
}

int main() {

    char texto[100]; // espaço para guardar a palavra

    printf("Digite uma palavra: "); // usuário digita uma palavra
    scanf("%s", texto); // lê a palavra digitada

    if (eh_alfabetico(texto)) { // chama a função para verificar

        printf("1\n"); // só tem letras

    } else {

        printf("0\n"); // tem número ou símbolo
    }

    return 0; // finalizou
}