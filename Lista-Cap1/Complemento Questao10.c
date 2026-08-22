#include <stdio.h>

/*
QUESTAO 10: c) Falso

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