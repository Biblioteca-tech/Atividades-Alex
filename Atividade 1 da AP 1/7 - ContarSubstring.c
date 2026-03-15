/**
 * @brief Conta quantas vezes uma substring aparece no texto (não sobreposto)
 * @param texto String onde procurar
 * @param busca Substring a ser encontrada
 * @return Número de ocorrências encontradas
 */

#include <stdio.h>      
#include <string.h>

int contar_substring(const char *texto, const char *busca) { // Função que conta quantas vezes uma substring aparece
    int contador = 0;            // Guarda o número de ocorrências encontradas
    int tam_busca = strlen(busca); // Tamanho da substring procurada
    int i;

    if (tam_busca == 0) {        // Verifica se a substring está vazia
        return 0;                // Se estiver vazia, retorna 0
    }

    while (*texto != '\0') {     // Percorre o texto até o final
        i = 0;

        while (texto[i] == busca[i] && busca[i] != '\0') { // Compara caractere por caractere
            i++;
        }

        if (i == tam_busca) {    // Se comparou todos os caracteres da substring
            contador++;          // Encontrou uma ocorrência
            texto += tam_busca;  // Avança o tamanho da substring
        } else {
            texto++;             // Avança apenas um caractere
        }
    }

    return contador;             // Retorna quantidade encontrada
}

int main() {

    // Lista de textos onde vamos procurar
    char *textos[] = {
        "banana",
        "aaaa",
        "abcabcabc",
        "hello world",
        "teste",
        "ababab",
        "aaaaa",
        "casa casa",
        "programacao",
        "abcdef"
    };

    // Lista de substrings que serão procuradas
    char *buscas[] = {
        "na",
        "aa",
        "abc",
        "world",
        "x",
        "ab",
        "aaa",
        "casa",
        "pro",
        "gh"
    };

    int quantidade_testes = 10; // quantidade de testes

    for (int i = 0; i < quantidade_testes; i++) { // percorre todos os testes

        int resultado = contar_substring(textos[i], buscas[i]); // chama a função

        printf("Texto: \"%s\" | Busca: \"%s\" -> Ocorrencias: %d\n",
               textos[i], buscas[i], resultado); // mostra o resultado
    }

    return 0; // finaliza o programa
}