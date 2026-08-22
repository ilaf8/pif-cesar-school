#include <stdio.h>  // biblioteca para o printf
#include <stdlib.h> // biblioteca para o system("PAUSE")

int main()
{
    printf("%c%c%cPrimeiro programa", '\n', '\t', '\"'); // passa o \n, \t e as aspas como caracteres pro %c tratar
    printf("%c", "\""); // aqui da erro de compilacao porque o %c espera caractere ' ' e foi passado texto " "
    system("PAUSE"); // trava a tela até apertar uma tecla
    return 0; // retorna a 0 indicando que o programa foi finalizado com sucesso
}

/*
SAIDA EXATA NO CONSOLE (caso corrija o erro do segundo printf trocando " " por ' '):

	"Primeiro programa"
Pressione qualquer tecla para continuar. . . 


COMO O COMPILADOR TRATA O %c COM ESSES CARACTERES:

O %c pega o valor ASCII de cada caractere passado entre aspas simples. 
Mesmo o '\n', '\t' e '\"' tendo duas letras na escrita, o compilador entende cada 
um como um unico caractere especial. O '\n' vira o salto de linha, o '\t' vira o tab 
e o '\"' vira a aspa dupla na tela. 

Ja na segunda linha deu erro porque o %c só aceita caractere simples (' '), mas no 
codigo foi colocado aspas duplas (" "), que o C entende como string/ponteiro e nao 
como um caractere isolado.
*/