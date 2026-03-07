# String Utils em C

Coleção de exercícios para **análise e manipulação de strings em C**, focados no aprendizado de:

* Manipulação de `char[]`
* Uso de **ponteiros**
* Iteração em strings
* Passagem por **valor e referência**
* Tratamento de **casos de borda**
* Lógica de manipulação de texto

As funções utilizam apenas recursos básicos da linguagem C.
As únicas funções da biblioteca padrão permitidas são:

```c
#include <string.h>
```

Principalmente:

* `strlen()`
* `strcpy()`

---

# Estrutura do Projeto

```
string_utils.c
README.md
```

O arquivo `string_utils.c` contém um conjunto de funções divididas em categorias de manipulação de strings.

---

# Funções de Contagem e Verificação

### `contar_vogais`

Conta o número de vogais presentes na string.

**Vogais consideradas:**

```
a e i o u
A E I O U
```

```c
int contar_vogais(const char *str);
```

---

### `contar_consoantes`

Conta o número de **consoantes** na string.

Regras:

* Ignora espaços
* Ignora números
* Ignora pontuação
* Considera apenas letras que **não são vogais**

```c
int contar_consoantes(const char *str);
```

---

### `contar_palavras`

Conta o número de palavras em uma string.

Regras:

* Palavras são separadas por:

  * espaço `" "`
  * tab `\t`
  * quebra de linha `\n`
* Vários separadores consecutivos contam como **apenas um**

Exemplo:

```
"Olá   mundo   C"
```

Resultado:

```
3 palavras
```

```c
int contar_palavras(const char *str);
```

---

### `contar_letras_maiusculas`

Conta quantas letras maiúsculas existem na string.

```
A-Z
```

```c
int contar_letras_maiusculas(const char *str);
```

---

### `eh_palindromo`

Verifica se a string é um **palíndromo**.

Regras:

* Ignora maiúsculas/minúsculas
* Ignora espaços
* Ignora caracteres não alfabéticos

Exemplo:

```
"Socorram me subi no onibus em Marrocos"
```

Resultado:

```
1 (verdadeiro)
```

```c
int eh_palindromo(const char *str);
```

---

### `contar_ocorrencias`

Conta quantas vezes um caractere aparece na string.

Exemplo:

```
Texto: "banana"
Caractere: 'a'

Resultado: 3
```

```c
int contar_ocorrencias(const char *str, char c);
```

---

### `contar_substring`

Conta quantas vezes uma **substring aparece no texto**.

Regras:

* Não conta ocorrências sobrepostas.

Exemplo:

```
Texto: "abcabcabc"
Busca: "abc"

Resultado: 3
```

```c
int contar_substring(const char *texto, const char *busca);
```

---

# Funções que Modificam a String

Essas funções **modificam a string original**.

---

### `converter_para_maiusculas`

Converte todos os caracteres para **maiúsculas**.

```c
void converter_para_maiusculas(char *str);
```

---

### `converter_para_minusculas`

Converte todos os caracteres para **minúsculas**.

```c
void converter_para_minusculas(char *str);
```

---

### `inverter_string`

Inverte a ordem dos caracteres da string.

Exemplo:

```
"casa" → "asac"
```

```c
void inverter_string(char *str);
```

---

### `remover_espacos_extras`

Normaliza os espaços da string.

Regras:

* Remove espaços no início
* Remove espaços no final
* Mantém apenas **um espaço entre palavras**

Exemplo:

```
"   ola    mundo   "

→ "ola mundo"
```

```c
void remover_espacos_extras(char *str);
```

---

### `substituir_caractere`

Substitui todas as ocorrências de um caractere por outro.

Exemplo:

```
Texto: "banana"
'antigo' = 'a'
'novo' = 'o'

Resultado:
"bonono"
```

```c
void substituir_caractere(char *str, char antigo, char novo);
```

---

# Funções de Busca e Extração

---

### `primeiro_indice`

Retorna a posição da **primeira ocorrência** de um caractere.

Retorno:

* índice da posição
* `-1` se não encontrado

```c
int primeiro_indice(const char *str, char c);
```

---

### `ultimo_indice`

Retorna a posição da **última ocorrência** de um caractere.

Retorno:

* índice da posição
* `-1` se não encontrado

```c
int ultimo_indice(const char *str, char c);
```

---

### `extrair_iniciais`

Extrai as iniciais de um nome completo.

Exemplo:

```
Entrada:
"Maria da Silva Santos"

Saída:
"MDS"
```

```c
void extrair_iniciais(char *destino, const char *nome_completo);
```

---

### `eh_anagrama`

Verifica se duas strings são **anagramas**.

Regras:

* Ignora maiúsculas/minúsculas
* Considera apenas letras

Exemplo:

```
"amor"
"roma"

Resultado:
1
```

```c
int eh_anagrama(const char *a, const char *b);
```

---

# Funções de Validação de Conteúdo

---

### `contar_digitos`

Conta quantos **dígitos (0-9)** existem na string.

```c
int contar_digitos(const char *str);
```

---

### `eh_alfabetico`

Verifica se a string contém **apenas letras**.

```
a-z
A-Z
```

```c
int eh_alfabetico(const char *str);
```

---

### `eh_numerico`

Verifica se a string contém **apenas números**.

```
0-9
```

```c
int eh_numerico(const char *str);
```

---

### `capitalizar_palavras`

Capitaliza a primeira letra de cada palavra.

Exemplo:

```
"ola mundo"

→

"Ola Mundo"
```

```c
void capitalizar_palavras(char *str);
```

---

# Objetivo Educacional

Este conjunto de exercícios foi projetado para treinar:

* lógica com strings
* manipulação de memória
* uso correto de ponteiros
* controle de fluxo
* algoritmos simples de texto

Ideal para quem está aprendendo:

* **C**
* **Estrutura de Dados**
* **Algoritmos básicos**

---
