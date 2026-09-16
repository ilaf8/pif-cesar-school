#include <stdio.h>

int main(void) {
    int valor;

    printf("Digite um numero inteiro: ");
    if (scanf("%d", &valor) != 1) {
        fprintf(stderr, "Entrada invalida.\n");
        return 1;
    }

    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | Caractere ASCII: %c\n",
           valor, (unsigned int)valor, (unsigned int)valor,
           (unsigned char)valor);

    return 0;
}

