# Lista de Exercícios – Capítulo 5: Funções

**Disciplina:** Programação Imperativa e Funcional (PIF) – CESAR School, 2026.2  
**Parte I:** Questões teóricas e analíticas (01 a 06)

## Questão 01 – Anatomia de uma função e o papel do protótipo

**a)** No programa apresentado:

- **Protótipo:** `float celsius(float);`. Avisa ao compilador que existe uma função chamada `celsius`, que recebe um `float` e retorna um `float`.
- **Chamada:** `c = celsius(f);`, dentro de `main()`. Ela executa a função passando o valor de `f` e guarda o resultado em `c`.
- **Definição:** `float celsius(float fahr) { return (fahr - 32.0) * 5.0 / 9.0; }`. Contém as instruções usadas na conversão.

**b)** O protótipo permite verificar, antes da definição da função, o nome, o tipo dos argumentos e o tipo de retorno. Se ele fosse removido e a definição permanecesse depois de `main()`, a chamada ocorreria sem uma declaração prévia. Em C moderno, isso deve ser diagnosticado pelo compilador; a verificação correta dos tipos fica comprometida. O programa deve declarar o protótipo ou colocar a definição antes da chamada.

**c)** O tipo de retorno é `float`, pois a função devolve uma temperatura com parte decimal. Os parâmetros dizem quais dados entram na função, mas não determinam seu tipo de retorno: isso é definido pela declaração da função.

## Questão 02 – O comando `return` e suas limitações

**a)** Cada execução de `return` devolve **um único valor** diretamente ao ponto da chamada. Na expressão `return soma, media;`, o operador vírgula avalia `soma`, descarta esse resultado e retorna somente `media`. Não é possível devolver as duas variáveis dessa forma. Para obter dois resultados, podem-se usar duas funções, parâmetros por ponteiro ou uma `struct`.

**b)** Em uma função `void`, `return;` apenas encerra sua execução imediatamente. No exemplo, se `erro < 0`, a mensagem de erro é impressa e a função termina antes de imprimir o código. Não é obrigatório usar `return;` no fim de uma função `void`, porque ela pode simplesmente chegar ao fechamento `}`.

**c)** Uma versão que retorna somente a média e outra que retorna somente a soma:

```c
float calcularMedia(int a, int b, int c) {
    return (a + b + c) / 3.0f;
}

int calcularSoma(int a, int b, int c) {
    return a + b + c;
}
```

Cada função devolve um resultado por `return`. A separação facilita reutilizar os cálculos independentemente. O tipo `float` na média preserva as casas decimais.

## Questão 03 – Funções `void`, parâmetros e assinaturas

**a)** Classificação dos protótipos:

| Protótipo | Recebe parâmetros? | Devolve valor? |
| --- | --- | --- |
| `void exibe_mensagem(char* msg);` | Sim, um ponteiro para `char` | Não (`void`) |
| `int obter_codigo(void);` | Não | Sim, um `int` |
| `void limpar_tela(void);` | Não | Não (`void`) |

**b)** Uma função com retorno produz um valor que pode ser guardado em uma variável ou usado em uma expressão; por exemplo, `int codigo = obter_codigo();`. Já uma função `void` realiza uma ação sem devolver valor, como `exibe_mensagem("Olá");` ou `limpar_tela();`.

**c)** `x = limpar_tela();` não é válido: `limpar_tela()` é `void`, portanto não produz um valor para atribuir a `x`. A chamada correta é `limpar_tela();`.

## Questão 04 – Recursão: caso base, passo recursivo e pilha

**a)** O **caso base** é `n == 0`, que faz a função retornar `1`. O **passo recursivo** é `n * fatorial(n - 1)`, que reduz o argumento em uma unidade. Sem o caso base, para valores como `4` as chamadas continuariam até esgotar os recursos da pilha de execução, podendo causar falha. A função apresentada pressupõe `n >= 0`.

**b)** Rastreamento de `fatorial(4)`:

Empilhamento (chamadas ainda aguardando resultado):

```text
fatorial(4) = 4 * fatorial(3)
fatorial(3) = 3 * fatorial(2)
fatorial(2) = 2 * fatorial(1)
fatorial(1) = 1 * fatorial(0)
fatorial(0) = 1              <- caso base
```

Desempilhamento (retornos):

```text
fatorial(0) devolve 1
fatorial(1) devolve 1 * 1  = 1
fatorial(2) devolve 2 * 1  = 2
fatorial(3) devolve 3 * 2  = 6
fatorial(4) devolve 4 * 6  = 24
```

**c)** Cada chamada recursiva cria uma nova ativação da função na pilha, com seu próprio argumento, variáveis locais e ponto de retorno. Quando ocorre o caso base, as chamadas são finalizadas na ordem inversa. Se a recursão não terminar, a pilha pode crescer até provocar estouro (*stack overflow*).

## Questão 05 – Diretiva `#define`, constantes e macros

**a)** No código apresentado, a saída é:

```text
25
8
```

`SQR(2+3)` se expande como `((2+3)*(2+3))`, isto é, `25`. Já `DOBRO(2+3)` foi definido sem proteção (`x*2`) e se expande como `2+3*2`, que vale `8` pela precedência da multiplicação. Uma definição segura seria `#define DOBRO(x) ((x) * 2)`.

**b)** `#define` é uma diretiva de pré-processamento, não uma instrução da linguagem C; por isso não exige `;` ao final. Usar identificadores em maiúsculas, como `PI`, `SQR` e `DOBRO`, é uma convenção que ajuda a distingui-los de variáveis e funções (não é obrigação do compilador).

**c)** O enunciado apresenta `#define PRN (n) printf("%d", n)`, **com um espaço entre `PRN` e `(`**. Isso é incorreto para definir uma macro com argumentos: o parêntese precisa estar imediatamente depois do nome. A forma correta é:

```c
#define PRN(n) printf("%d", (n))
```

Para permitir o uso mais seguro como instrução, inclusive dentro de `if`, uma alternativa é:

```c
#define PRN(n) do { printf("%d", (n)); } while (0)
```

O arquivo deve incluir `<stdio.h>`. Uma macro faz substituição de texto antes da compilação, sem verificação de tipos própria; uma função comum declara tipos dos parâmetros e é verificada pelo compilador. Macros também exigem cuidado com parênteses e argumentos que tenham efeitos colaterais.

## Questão 06 – `#include`, `#undef` e compilação condicional

**a)** `#include <stdio.h>` normalmente procura um cabeçalho do sistema ou das bibliotecas configuradas, como a biblioteca padrão de entrada e saída. `#include "areas.h"` procura primeiro um cabeçalho do projeto (nas regras de busca do compilador), como um arquivo criado na mesma pasta do programa.

**b)** `#undef SOMA` remove a definição da macro `SOMA` a partir daquele ponto do arquivo. A sintaxe `#undef SOMA(x,y)` é incorreta porque `#undef` recebe somente o **nome** da macro, sem parâmetros.

**c)** Se `DEBUG` não estiver definido, a mensagem será:

```text
Modo normal
```

A seleção ocorre durante o **pré-processamento**, antes da compilação, pois `#ifdef DEBUG` verifica a existência dessa macro. O pré-processador mantém apenas o ramo escolhido; as diretivas não fazem parte das instruções executáveis do programa final. Observação: o trecho do enunciado mostra `printf` fora de uma função; para ser um programa C compilável, esse bloco deve ficar dentro de `main()` ou de outra função.
