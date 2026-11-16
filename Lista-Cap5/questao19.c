#include <stdio.h>

void contagem(int n);
void contagemCrescente(int n);

int main(void) {
    int n;

    printf("Digite um inteiro positivo: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Digite um numero positivo.\n");
        return 1;
    }

    printf("Contagem regressiva:\n");
    contagem(n);
    printf("Contagem crescente:\n");
    contagemCrescente(n);
    return 0;
}

void contagem(int n) {
    if (n == 0) {
        printf("Fogo!\n");
        return;
    }

    // Imprime antes da chamada: n, n-1, ..., 1.
    printf("%d\n", n);
    contagem(n - 1);
}

void contagemCrescente(int n) {
    if (n == 0) {
        return;
    }

    contagemCrescente(n - 1);
    // Imprime depois da chamada: 1, 2, ..., n, no desempilhamento.
    printf("%d\n", n);
}
