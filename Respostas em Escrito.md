QUESTÃO 10: c) Falso

JUSTIFICATIVA:
Ser case sensitive significa que o C diferencia maiuscula de minuscula. 

Na pratica, 'peso', 'Peso' e 'PESO' sao 3 variaveis diferentes. O compilador guarda 
cada uma num canto da memoria porque os codigos ASCII das letras sao diferentes. 
Se declarar 'peso' e tentar usar 'PESO', da erro de variavel nao declarada.
*/

int main() {
    int peso = 10;  
    int Peso = 20;
    int PESO = 30;

    printf("%d %d %d\n", peso, Peso, PESO);
    return 0;
}


QUESTÃO 11:
\r    — sequência de escape  — char
2130  — constante inteira decimal — int
-123  — constante inteira decimal  — int
33.28 — constante de ponto flutuante   — double
0XFA  — constante inteira hexadecimal   — int
0101  — constante inteira octal  — int
2.0e30 — constante de ponto flutuante  — double
\xDC  — sequência de escape   — char
'\"'  — constante de caractere  — char
'\\'  — constante de caractere — char
'F'   — constante de caractere — char
0     — constante inteira decimal  — int
'\0'  — constante de caractere  — char
"F"   — constante string — char
-4567.89 — constante de ponto flutuante — double


QUESTÃO 12:
a) int a;
Status: Correto.
Justificativa: Declara uma variável inteira chamada a.

b) float b;
Status: Correto.
Justificativa: Declara uma variável de ponto flutuante de precisão simples chamada b.

c) double float c;
Status: Incorreto.
Justificativa: Não é permitido combinar double e float dessa forma. O correto seria usar apenas double c; ou float c;.

d) unsigned char d;
Status: Correto.
Justificativa: Declara uma variável do tipo char sem sinal.

e) unsigned e;
Status: Correto.
Justificativa: Quando unsigned é usado sem outro tipo inteiro, o padrão considera o tipo int. Portanto, equivale a unsigned int e;.

f) long float f;
Status: Incorreto.
Justificativa: O modificador long não pode ser utilizado dessa forma com float. Para maior precisão deve ser utilizado long double.

g) long g;
Status: Correto.
Justificativa: Quando long é usado sozinho, ele equivale a long int.

h) long double h;
Status: Correto.
Justificativa: Declara uma variável de ponto flutuante de maior precisão do que double.


QUESTÃO 13:
Resposta: c) São arquivos de texto ASCII padrão contendo protótipos de funções, definições de constantes, macros e tipos.

Justificativa: Os arquivos de cabeçalho, normalmente com extensão .
h, possuem informações que podem ser utilizadas pelo programa, como protótipos de funções, constantes, macros e tipos.


QUESTÃO 14:
Resposta: a) Instruir o compilador a carregar as definições das funções da biblioteca padrão antes de compilar o código-fonte.

Justificativa: O #include permite incluir um arquivo de cabeçalho no código-fonte, 
disponibilizando as declarações necessárias para utilizar funções e outros recursos.


QUESTÃO 15:
Resposta: c) Uma diretiva especial para o pré-processador C, executada antes da compilação.


QUESTÃO 16:
Resposta: c) Pré-processador (fase do compilador que altera o programa-fonte antes da compilação propriamente dita).