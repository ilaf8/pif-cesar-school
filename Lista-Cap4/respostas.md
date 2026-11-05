# Lista de Exercícios — Capítulo 4: Comandos de Decisão

Disciplina: Programação Imperativa e Funcional — CESAR School — 2026.2

## Questão 01

**a)** `if (x = 0)` faz uma atribuição: guarda zero em `x`. O valor da expressão de atribuição também é zero, portanto a condição é falsa. O bloco do `if` é ignorado e o `else`, caso exista, é executado. Já `if (x == 0)` compara `x` com zero, sem alterar a variável.

**b)** Uma condição numérica igual a zero é falsa; qualquer valor diferente de zero é verdadeiro, incluindo números negativos e valores reais diferentes de zero. Por exemplo, `0.0` é falso e `-2.5` é verdadeiro.

**c)** O bloco é executado. A expressão `x = -5` atribui `-5` a `x` e produz esse mesmo valor. Como ele é diferente de zero, a condição é verdadeira segundo as regras da linguagem C.

## Questão 02

**a)** A saída é:

```text
Opção B
```

`x > 10` é verdadeiro, então o segundo `if` é avaliado. Como `y > 10` é falso, seu `else` imprime a Opção B. A indentação não determina a associação do `else`.

**b)** O `else` pertence ao `if` anterior mais próximo que ainda não tem `else` e ao qual ele pode ser associado sintaticamente.

**c)**

```c
int x = 15, y = 5;

if (x > 10) {
    if (y > 10) {
        printf("Opção A\n");
    }
} else {
    printf("Opção B\n");
}
```

Nessa versão, a Opção B só aparece quando `x <= 10`. Com `x = 15` e `y = 5`, nenhuma mensagem é impressa.

## Questão 03

**a)** Primeiro é verificado se `media >= 7.0`. Se for verdadeiro, a expressão produz `'A'`; caso contrário, produz `'R'`. Apenas uma das alternativas é avaliada. Com `media = 6.8`, `situacao` recebe `'R'`.

**b)**

```c
media = (nota1 + nota2) / 2.0;

if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}
```

**c)** Não substitui diretamente qualquer `if-else`. O ternário é uma expressão, cujas alternativas também precisam ser expressões com tipos compatíveis conforme as regras de C. Ele não aceita diretamente blocos de comandos com declarações, laços ou `break`. É possível combinar algumas operações com chamadas de funções ou com o operador vírgula, mas blocos maiores geralmente ficam mais claros com `if-else`.

## Questão 04

**a)** A saída exata é:

```text
Prata
Ouro
```

O programa entra no `case 2` e continua executando os comandos do `case 3`, porque não existe `break` depois da impressão de Prata. O `break` do `case 3` encerra o `switch`, impedindo a execução do `default`.

**b)** `break` encerra o `switch` ou laço mais interno em que está inserido. No exemplo, encerra o `switch`. A passagem para o próximo caso sem interrupção é chamada de *fall-through*.

**c)** A expressão do `switch` deve ter tipo inteiro, como `char`, `short`, `int`, `long` ou um tipo enumerado (`enum`), incluindo os tipos inteiros sem sinal. Ela passa pelas promoções inteiras. `float` e `double` não são permitidos diretamente. Os valores dos `case` devem ser expressões constantes inteiras, sem duplicação após a conversão para o tipo da expressão de controle promovida.

## Questão 05

**a)** A saída exata é:

```text
a = 0, b = 5, c = 8
```

`a != 0` é falso. Por curto-circuito, `++b > 5` não é avaliado, então `b` continua em 5. O `else` subtrai 2 de `c`.

**b)** Em `&&`, se o operando da esquerda for falso, o da direita não é avaliado, pois o resultado já será falso. Em `||`, se o operando da esquerda for verdadeiro, o da direita não é avaliado, pois o resultado já será verdadeiro.

**c)** Considerando novamente os valores iniciais `a = 0`, `b = 5` e `c = 10`, a condição `a == 0 || ++b > 5` é verdadeira pelo primeiro operando. O incremento não acontece. Assim, `b = 5` e `c = 20`.

## Questão 06

**a)** Para `idade = 65`, a saída é:

```text
Idoso
Adulto
Jovem
```

Os três `if` são independentes e as três condições são verdadeiras. O `else` pertence somente ao último `if`, cuja condição também é verdadeira, então Criança não é impresso.

**b)** Em uma sequência de `if` independentes, cada condição é avaliada e vários blocos podem executar. Em uma cadeia `if`/`else if`/`else`, apenas o primeiro bloco cuja condição for verdadeira é executado. Se nenhuma condição for verdadeira, executa-se o `else`, caso exista.

**c)**

```c
int idade = 25;

if (idade >= 60) {
    printf("Idoso\n");
} else if (idade >= 18) {
    printf("Adulto\n");
} else if (idade >= 12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}
```
