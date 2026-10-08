#include <stdio.h>
#include <math.h>

int main(void) {
    double valor;
    double soma = 0.0;
    int quantidade = 0;

    while (1) {
        printf("Digite um valor positivo (negativo para encerrar): ");
        if (scanf("%lf", &valor) != 1 || !isfinite(valor)) {
            printf("Entrada invalida.\n");
            return 1;
        }
        if (valor < 0.0) {
            break;
        }
        if (valor == 0.0) {
            printf("O valor deve ser maior que zero.\n");
            continue;
        }
        soma += valor;
        quantidade++;
    }

    printf("Quantidade de valores validos: %d\n", quantidade);
    printf("Soma total: %.2f\n", soma);
    if (quantidade > 0) {
        printf("Media aritmetica: %.2f\n", soma / quantidade);
    } else {
        printf("Nenhum valor valido informado. Nao ha media.\n");
    }
    return 0;
}
