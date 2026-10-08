#include <stdio.h>

int main(void) {
    int n;
    long long int valor = 1;
    printf("Informe o numero de linhas: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Erro: N deve ser um inteiro positivo.\n");
        return 1;
    }

    for (long long int linha = 1; linha <= n; linha++) {
        for (long long int coluna = 1; coluna <= linha; coluna++) {
            printf("%lld%s", valor, coluna == linha ? "\n" : " ");
            valor++;
        }
    }
    return 0;
}
