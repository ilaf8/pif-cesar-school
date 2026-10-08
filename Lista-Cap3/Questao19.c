#include <stdio.h>
#include <limits.h>

int main(void) {
    int n;
    long long int anterior = 0;
    long long int atual = 1;
    printf("Informe o numero do termo desejado: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Erro: N deve ser um inteiro positivo.\n");
        return 1;
    }

    printf("Sequencia: ");
    for (long long int i = 1; i <= n; i++) {
        printf("%lld%s", atual, i == n ? "\n" : " ");
        if (i < n) {
            if (anterior > LLONG_MAX - atual) {
                printf("\nErro: o proximo termo ultrapassa o limite de long long int.\n");
                return 1;
            }
            long long int proximo = anterior + atual;
            anterior = atual;
            atual = proximo;
        }
    }
    printf("Termo %d: %lld\n", n, atual);
    return 0;
}
