#include <stdio.h>
#include <limits.h>

int main(void) {
    long long int numero;
    long long int invertido = 0;
    printf("Informe um inteiro positivo: ");
    if (scanf("%lld", &numero) != 1 || numero <= 0) {
        printf("Erro: informe um inteiro positivo.\n");
        return 1;
    }

    while (numero > 0) {
        int digito = (int)(numero % 10);
        if (invertido > (LLONG_MAX - digito) / 10) {
            printf("Erro: o numero invertido ultrapassa o limite de long long int.\n");
            return 1;
        }
        invertido = invertido * 10 + digito;
        numero /= 10;
    }
    printf("Numero invertido: %lld\n", invertido);

    return 0;
}
