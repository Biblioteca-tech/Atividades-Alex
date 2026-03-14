// PARADIGMAS DE PROGRAMAÇÃO - PROFº ALEX TORQUATO - FACULDADE IMPACTA
// É/NÃO ALFABÉTICO - EXRCÍCIO 018 - ATIVIDADE 01

//ENUNCIADO DO EXERCÍCIO:

//@brief Verifica se a string contém apenas letras (a-z A-Z)
//@param str String a ser verificada
//@return 1 se for estritamente alfabética, 0 caso contrário

//RESOLUÇÃO DO EXERCÍCIO:

#include <stdio.h> // biblioteca para usar printf

int eh_alfabetico(const char *str) { // função que verifica se a palavra tem APENAS letras  

    int i = 0; // variável usada para percorrer a palavra
 
    while (str[i] != '\0') { // percorre a palavra até encontrar o final da string '\0'
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))) { // verifica se o caractere NÃO está entre a-z ou A-Z
            return 0; // se encontrar número ou símbolo retorna 0
        }
        i++; // passa para a próxima letra
    }
    return 1; // se passou por tudo e só tinha letras, retorna 1
}

int main() {

    char *entradas[] = { // lista de palavras usadas nos testes
        "abc",
        "ABC",
        "abc123",
        "123",
        "hello",
        "ola mundo",
        "",
        "Java",
        "C99",
        "teste!"
    };

    int quantidade_testes = 10; // quantidade de testes

    for (int i = 0; i < quantidade_testes; i++) { // percorre todos os testes

        int resultado = eh_alfabetico(entradas[i]); // chama a função para verificar se é alfabético

        printf("ENTRADA: \"%s\"\n", entradas[i]); // mostra a palavra
        printf("SAIDA: %d\n\n", resultado); // mostra o resultado
    }

    return 0; // finalizou
}


//RESULTADO ESPERADO:

//ENTRADA: "abc"
//SAIDA: 1

//ENTRADA: "ABC"
//SAIDA: 1

//ENTRADA: "abc123"
//SAIDA: 0

//ENTRADA: "123"
//SAIDA: 0

//ENTRADA: "hello"
//SAIDA: 1

//ENTRADA: "ola mundo"
//SAIDA: 0

//ENTRADA: ""
//SAIDA: 1

//ENTRADA: "Java"
//SAIDA: 1

//ENTRADA: "C99"
//SAIDA: 0

//ENTRADA: "teste!"
//SAIDA: 0