# Lista de Exercícios - Capítulo 3

## Questão 01

**a)** O `while` verifica a condição antes de executar o bloco, então pode não executar nenhuma vez. O `do-while` executa o bloco primeiro e só depois verifica a condição. Por isso, ele sempre executa pelo menos uma vez.

**b)** Usaria o `for` para uma contagem com início e fim definidos. O `while` serve melhor quando a repetição depende de uma condição, como ler valores até o usuário pedir para parar. O `do-while` é bom para menus e validação de entrada, porque precisa executar pelo menos uma vez.

**c)** Não é um erro de compilação. O ponto e vírgula deixa o corpo do `while` vazio. Se a condição continuar verdadeira, o programa fica repetindo o teste sem fazer nada no corpo. Nesse caso, é um erro de lógica. Um bloco colocado depois do ponto e vírgula não pertence ao laço.

## Questão 02

**a)** O erro acontece porque `soma` foi declarada dentro do `for`. Fora desse bloco, o `printf` não consegue acessar a variável.

**b)** Mesmo colocando o `printf` dentro do laço, a soma ficaria errada porque a variável volta para zero em cada repetição. Assim, ela guarda só o quadrado daquele número, sem acumular os anteriores.

**c)** Para corrigir, coloquei `soma` antes do laço e inicializei com zero uma única vez.

```c
#include <stdio.h>

int main(void) {
    int i;
    int soma = 0;

    for (i = 1; i < 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);
    return 0;
}
```

O resultado é 285. O escopo indica onde a variável pode ser acessada. Como `soma` está no bloco de `main`, ela pode ser usada no laço e no `printf` depois dele. O tempo de vida indica por quanto tempo a variável existe. Uma variável local comum dentro do corpo do laço existe durante aquela execução do bloco e é criada novamente na próxima repetição. Uma variável local `static` mantém seu valor durante toda a execução do programa, mesmo tendo acesso limitado ao bloco.

## Questão 03

**a)** Os valores impressos são:

```text
36    18    9    4    2    1
```

Eles são separados por tabulação. Como a divisão é entre inteiros, a parte decimal é descartada. Depois do 1, a divisão resulta em zero e o laço termina.

**b)** O programa lê um caractere e guarda em `ch`. Se ele for diferente de `X`, imprime o caractere de código seguinte e repete. Na tabela ASCII, por exemplo, `A + 1` corresponde a `B`. Ao digitar `X`, o laço termina.

Os parênteses fazem a atribuição acontecer antes da comparação. Sem eles, o programa compararia primeiro o retorno de `getch()` com `X` e guardaria em `ch` apenas 0 ou 1. A função `getch()` não faz parte da biblioteca padrão de C.

**c)** Pode usar `break` quando uma condição de parada for atendida. Assim, o programa sai do laço e continua nos comandos seguintes.

```c
int contador = 0;

for (;;) {
    printf("Laco Infinito\n");
    contador++;
    if (contador == 5) {
        break;
    }
}
```

## Questão 04

**a)** O `break` encerra o laço na hora e segue para o comando que vem depois dele.

**b)** O `continue` pula o restante da repetição atual. No `for`, a próxima expressão executada é a de atualização, que fica na terceira parte do cabeçalho. Depois, a condição é verificada novamente.

**c)** Só o laço interno é interrompido. O laço externo continua normalmente.

## Questão 05

**a)** O laço executa 5 vezes. Depois da quinta repetição, `i` e `j` ficam iguais a 5, então a condição `i < j` deixa de ser verdadeira.

**b)** A saída é:

```text
i = 0, j = 10 | soma = 10
i = 1, j = 9 | soma = 10
i = 2, j = 8 | soma = 10
i = 3, j = 7 | soma = 10
i = 4, j = 6 | soma = 10
```

**c)** Com `while`, fica assim:

```c
int i = 0;
int j = 10;

while (i < j) {
    printf("i = %d, j = %d | soma = %d\n", i, j, i + j);
    i++;
    j--;
}
```

## Questão 06

**a)** O valor final de `x` é 6.

**b)** O `x++` usa o valor atual na comparação e depois aumenta a variável. Os testes usam os valores 0, 1, 2, 3 e 4, que são menores que 5. No último teste, usa o valor 5. A comparação é falsa, mas o incremento acontece mesmo assim, deixando `x` igual a 6.

**c)** Sem o corpo vazio, mantendo o mesmo resultado:

```c
int x = 0;

while (1) {
    int valor_anterior = x;
    x++;

    if (valor_anterior >= 5) {
        break;
    }
}

printf("Valor final de x = %d\n", x);
```

## Questão 07

O `for` é o mais adequado para essa contagem, porque já sabemos que ela começa em 0 e termina em 100. Além disso, o início, a condição e o incremento ficam juntos no cabeçalho.
