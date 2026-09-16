# Respostas em Escrito - Capítulo 2

## Questão 01 - Truncamento de tipos e coerção implícita

### a) Valor exibido

O valor exibido será:

```text
O valor armazenado é: 2
```

### b) Motivo

O número `2.97` é um valor do tipo `double`. Ao ser atribuído à variável inteira `valor_inteiro`, C realiza uma **conversão implícita de tipo**.

Como uma variável `int` não armazena casas decimais, a parte fracionária é descartada. A conversão ocorre por truncamento em direção a zero, portanto `2.97` passa a ser `2`. Não ocorre arredondamento automático.

### c) Como controlar o comportamento

Para manter as casas decimais, deve-se utilizar `float` ou `double`:

```c
double valor = 2.97;
```

Para deixar o truncamento explícito, pode-se utilizar um *cast*:

```c
int truncado = (int)valor;
```

Para arredondar, pode-se utilizar `round()`, da biblioteca `<math.h>`:

```c
int arredondado = (int)round(valor);
```

Nesse caso, `2.97` será arredondado para `3`.

> Observação: `system("PAUSE")` também não faz parte do padrão C e depende do Windows.

---

## Questão 02 - Entrada de caracteres e bibliotecas legadas

### a) Por que evitar `<conio.h>`

A biblioteca `<conio.h>` não faz parte do padrão ISO/ANSI C. Funções como `getch()` e `getche()` são extensões encontradas principalmente em compiladores antigos e em determinados ambientes Windows.

Como a biblioteca pode não existir em Linux, macOS e servidores, utilizá-la reduz a portabilidade do programa.

### b) Alternativas da biblioteca padrão

As funções portáveis de `<stdio.h>` são:

- `getchar()`: lê um caractere da entrada padrão;
- `putchar()`: escreve um caractere na saída padrão.

Em um terminal comum, `getchar()` normalmente aguarda o usuário pressionar Enter. O padrão C não possui uma função completamente equivalente a `getch()` para leitura imediata sem Enter.

### c) Leitura robusta

O programa completo está em [`Questao2.c`](Questao2.c). A leitura mantém o resultado de `getchar()` em uma variável `int`, permitindo identificar `EOF`, e ignora os caracteres de quebra de linha `\n` e `\r`.

---

## Questão 03 - Bases numéricas e ASCII

O programa completo está em [`Questao3.c`](Questao3.c). Ele utiliza os especificadores:

| Representação | Especificador |
| --- | --- |
| Decimal | `%d` |
| Hexadecimal minúsculo | `%x` |
| Octal | `%o` |
| Caractere | `%c` |

Exemplo para o valor decimal `65`:

```text
Decimal: 65 | Hexadecimal: 41 | Octal: 101 | Caractere ASCII: A
```

---

## Questão 04 - Atribuição composta e precedência

Estado inicial:

```text
a = 1, b = 2, c = 3, d = 4
```

### 1. `a += b + c`

```text
a = 1 + (2 + 3)
a = 6
```

Estado: `a = 6`, `b = 2`, `c = 3`, `d = 4`.

### 2. `b *= c = d + 2`

Os operadores de atribuição associam-se da direita para a esquerda:

```text
c = d + 2
c = 4 + 2
c = 6

b *= 6
b = 2 * 6
b = 12
```

Estado: `a = 6`, `b = 12`, `c = 6`, `d = 4`.

### 3. `d %= a + a + a`

```text
d = 4 % (6 + 6 + 6)
d = 4 % 18
d = 4
```

Estado: `a = 6`, `b = 12`, `c = 6`, `d = 4`.

### 4. `d -= c -= b -= a`

A avaliação das atribuições ocorre da direita para a esquerda:

```text
b -= a  -> b = 12 - 6 = 6
c -= 6  -> c = 6 - 6 = 0
d -= 0  -> d = 4 - 0 = 4
```

Estado: `a = 6`, `b = 6`, `c = 0`, `d = 4`.

### 5. `a += b += c += 7`

```text
c += 7  -> c = 0 + 7 = 7
b += 7  -> b = 6 + 7 = 13
a += 13 -> a = 6 + 13 = 19
```

### Valores finais

```text
a = 19, b = 13, c = 7, d = 4
```

---

## Questão 05 - Expressões lógicas e relacionais

Valores iniciais:

```c
int i = 1, j = 2, k = 3, n = 2;
float x = 3.3, y = 4.4;
```

| Item | Expressão | Avaliação | Resultado |
| --- | --- | --- | --- |
| a | `i < j + 3` | `1 < 5` | `1` |
| b | `2 * i - 7 <= j - 8` | `-5 <= -6` | `0` |
| c | `-x + y >= 2.0 * y` | `1.1 >= 8.8` | `0` |
| d | `x == y` | `3.3 == 4.4` | `0` |
| e | `!(n - j)` | `!(2 - 2)` → `!0` | `1` |
| f | `!n - j` | `(!2) - 2` → `0 - 2` | `-2` |
| g | `i && j && k` | `1 && 2 && 3` | `1` |
| h | `i \|\| j - 3 && k` | `1 \|\| ((2 - 3) && 3)` | `1` |
| i | `i < j && 2 >= k` | `(1 < 2) && (2 >= 3)` | `0` |
| j | `i == 2 \|\| j == 4 \|\| k == 5` | `0 \|\| 0 \|\| 0` | `0` |

No item **f**, o valor numérico da expressão é `-2`, e não `1` ou `0`. Caso a expressão completa seja utilizada como condição, ela será considerada verdadeira, pois qualquer valor diferente de zero é verdadeiro em C.

No item **h**, `&&` possui precedência maior que `||`. Além disso, como `i` já é verdadeiro, ocorre curto-circuito e o restante da expressão não precisa ser avaliado.

---

## Questão 06 - Incrementos prefixado e pós-fixado

### a) Diferença entre prefixado e pós-fixado

No incremento prefixado, a variável é incrementada antes de seu valor ser utilizado:

```c
int n = 5;
int x = ++n;
```

Saída:

```text
Trecho A: n = 6, x = 6
```

No incremento pós-fixado, o valor atual é utilizado primeiro e o incremento ocorre depois:

```c
int m = 5;
int y = m++;
```

Saída:

```text
Trecho B: m = 6, y = 5
```

### b) Comportamento indefinido

Na instrução:

```c
printf("%d\t%d\t%d\n", n, n + 1, n++);
```

`n` é lido mais de uma vez e também é modificado por `n++` dentro da mesma expressão. A linguagem C não determina uma ordem obrigatória para a avaliação dos argumentos de uma função.

As leituras de `n` e a alteração feita por `n++` ficam sem sequenciamento entre si. Isso gera **comportamento indefinido**, podendo produzir resultados diferentes dependendo do compilador ou do nível de otimização.

Uma forma segura é separar a modificação:

```c
printf("%d\t", n);
printf("%d\t", n + 1);
printf("%d\n", n);
n++;
```

