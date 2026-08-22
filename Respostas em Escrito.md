# Respostas em Escrito — Capítulo 1

## Questão 10

**Resposta:** c) Falso

### Justificativa

Ser **case sensitive** significa que a linguagem C diferencia letras maiúsculas de minúsculas.

Na prática, `peso`, `Peso` e `PESO` são **três variáveis diferentes**. O compilador trata cada identificador de forma distinta porque os códigos ASCII das letras maiúsculas e minúsculas são diferentes.

Se for declarada a variável `peso` e, posteriormente, for utilizado `PESO`, ocorrerá um erro de variável não declarada.

### Exemplo

```c
int main() {
    int peso = 10;
    int Peso = 20;
    int PESO = 30;

    printf("%d %d %d\n", peso, Peso, PESO);
    return 0;
}
```

---

## Questão 11

| Constante  | Classificação                 | Tipo     |
| ---------- | ----------------------------- | -------- |
| `\r`       | Sequência de escape           | `char`   |
| `2130`     | Constante inteira decimal     | `int`    |
| `-123`     | Constante inteira decimal     | `int`    |
| `33.28`    | Constante de ponto flutuante  | `double` |
| `0XFA`     | Constante inteira hexadecimal | `int`    |
| `0101`     | Constante inteira octal       | `int`    |
| `2.0e30`   | Constante de ponto flutuante  | `double` |
| `\xDC`     | Sequência de escape           | `char`   |
| `'\"'`     | Constante de caractere        | `char`   |
| `'\\'`     | Constante de caractere        | `char`   |
| `'F'`      | Constante de caractere        | `char`   |
| `0`        | Constante inteira decimal     | `int`    |
| `'\0'`     | Constante de caractere        | `char`   |
| `"F"`      | Constante string              | `char`   |
| `-4567.89` | Constante de ponto flutuante  | `double` |

---

## Questão 12

### a) `int a;`

**Status:** Correto.

**Justificativa:** Declara uma variável inteira chamada `a`.

### b) `float b;`

**Status:** Correto.

**Justificativa:** Declara uma variável de ponto flutuante de precisão simples chamada `b`.

### c) `double float c;`

**Status:** Incorreto.

**Justificativa:** Não é permitido combinar `double` e `float` dessa forma. O correto seria utilizar apenas `double c;` ou `float c;`.

### d) `unsigned char d;`

**Status:** Correto.

**Justificativa:** Declara uma variável do tipo `char` sem sinal.

### e) `unsigned e;`

**Status:** Correto.

**Justificativa:** Quando `unsigned` é utilizado sem outro tipo inteiro, o padrão considera o tipo `int`. Portanto, equivale a `unsigned int e;`.

### f) `long float f;`

**Status:** Incorreto.

**Justificativa:** O modificador `long` não pode ser utilizado dessa forma com `float`. Para maior precisão, deve ser utilizado `long double`.

### g) `long g;`

**Status:** Correto.

**Justificativa:** Quando `long` é utilizado sozinho, ele equivale a `long int`.

### h) `long double h;`

**Status:** Correto.

**Justificativa:** Declara uma variável de ponto flutuante de maior precisão do que `double`.

---

## Questão 13

**Resposta:** c) São arquivos de texto ASCII padrão contendo protótipos de funções, definições de constantes, macros e tipos.

### Justificativa

Os arquivos de cabeçalho, normalmente com extensão `.h`, possuem informações que podem ser utilizadas pelo programa, como **protótipos de funções, constantes, macros e tipos**.

---

## Questão 14

**Resposta:** a) Instruir o compilador a carregar as definições das funções da biblioteca padrão antes de compilar o código-fonte.

### Justificativa

A diretiva `#include` permite incluir um arquivo de cabeçalho no código-fonte, disponibilizando as declarações necessárias para utilizar funções e outros recursos.

---

## Questão 15

**Resposta:** c) Uma diretiva especial para o pré-processador C, executada antes da compilação.

---

## Questão 16

**Resposta:** c) Pré-processador — fase do compilador que altera o programa-fonte antes da compilação propriamente dita.
