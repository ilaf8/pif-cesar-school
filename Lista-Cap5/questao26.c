#include <stdio.h>

long fibonacci(int n);

int main(void) {
    int quantidade, i;

    printf("Quantos termos de Fibonacci deseja mostrar (1 a 40)? ");
    if (scanf("%d", &quantidade) != 1 || quantidade < 1 || quantidade > 40) {
        printf("Digite uma quantidade entre 1 e 40.\n");
        return 1;
    }

    printf("Sequencia: ");
    for (i = 0; i < quantidade; i++) {
        printf("%ld", fibonacci(i));
        if (i < quantidade - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}

long fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    // Esta versao simples eh lenta para n grande porque recalcula
    // os mesmos valores muitas vezes (numero de chamadas exponencial).
    // A limitacao a 40 termos evita esperas muito longas no exemplo.
    return fibonacci(n - 1) + fibonacci(n - 2);
}
