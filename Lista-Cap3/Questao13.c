#include <stdio.h>
#include <limits.h>

int main(void) {
    int n;
    long long int fatorial = 1;
    printf("Informe um inteiro nao negativo: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }
    if (n < 0) {
        printf("Erro: nao existe fatorial de inteiro negativo neste programa.\n");
        return 1;
    }

    for (long long int i = 2; i <= n; i++) {
        if (fatorial > LLONG_MAX / i) {
            printf("Erro: o fatorial ultrapassa o limite de long long int.\n");
            return 1;
        }
        fatorial *= i;
    }
    printf("%d! = %lld\n", n, fatorial);
    return 0;
}
