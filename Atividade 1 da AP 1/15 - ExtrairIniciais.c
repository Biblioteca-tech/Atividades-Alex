/**
 * @brief Extrai as iniciais de um nome completo (com pontos ou sem)
 * @param destino Buffer onde será escrito o resultado (deve ter espaço suficiente)
 * @param nome_completo Nome completo (ex: "Maria da Silva Santos")
 * @note Escreve apenas as letras maiúsculas iniciais (ex: "MDS")
 */

#include <stdio.h>      
#include <string.h>     

// Função que extrai as iniciais de um nome completo
void extrair_iniciais(char *destino, const char *nome_completo) {

    int i = 0;          // variável para percorrer a string nome_completo
    int j = 0;          // variável para preencher a string destino

    if (nome_completo[0] != '\0') {          // verifica se a string não está vazia
        char c = nome_completo[0];           // pega o primeiro caractere do nome

        if (c >= 'a' && c <= 'z') {          // verifica se a letra é minúscula
            c = c - ('a' - 'A');             // converte para maiúscula
        }

        destino[j++] = c;                    // coloca a primeira inicial no destino
    }

    while (nome_completo[i] != '\0') {       // percorre a string até o final

        if (nome_completo[i] == ' ' && nome_completo[i + 1] != '\0') { // verifica se encontrou um espaço
            char c = nome_completo[i + 1];   // pega a letra da próxima palavra

            if (c >= 'a' && c <= 'z') {      // verifica se é minúscula
                c = c - ('a' - 'A');         // converte para maiúscula
            }

            destino[j++] = c;                // adiciona a inicial no destino
        }

        i++;                                 // avança na string
    }

    destino[j] = '\0';                       // finaliza a string destino
}

int main() {

    // Lista de nomes para teste
    char *nomes[] = {
        "Maria Silva",
        "Joao da Silva",
        "Ana",
        "Pedro Paulo Souza",
        "Carlos Alberto",
        "Luiz Inacio Lula (Comunista)",
        "Maria",
        "Jose da Costa",
        "Ana Beatriz Costa",
        "Paulo Roberto"
    };

    int quantidade_testes = 10; // quantidade de nomes

    for (int i = 0; i < quantidade_testes; i++) { // percorre todos os testes

        char iniciais[20]; // buffer para armazenar as iniciais

        extrair_iniciais(iniciais, nomes[i]); // chama a função

        printf("Nome: \"%s\" -> Iniciais: %s\n", nomes[i], iniciais); // imprime resultado
    }

    return 0; // finaliza o programa
}