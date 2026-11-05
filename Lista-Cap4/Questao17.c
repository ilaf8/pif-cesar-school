/* Questão 17 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>
#include <math.h>

int main(void) {
    double total, valor_final, comissao;
    int opcao;
    printf("Digite o valor total da compra: ");
    if (scanf("%lf", &total) != 1 || !isfinite(total) || total <= 0) {
        printf("Erro: valor da compra inválido!\n");
        return 1;
    }
    printf("1 - À vista (10%% de desconto)\n2 - Parcelado em 3x sem juros\n");
    if (scanf("%d", &opcao) != 1) {
        printf("Erro: entrada inválida!\n");
        return 1;
    }
    switch (opcao) {
        case 1:
            valor_final = total * 0.90;
            printf("Valor final à vista: R$ %.2f\n", valor_final);
            break;
        case 2:
            valor_final = total;
            printf("Valor total: R$ %.2f\n", valor_final);
            printf("Valor de cada parcela (3x): R$ %.2f\n", valor_final / 3.0);
            break;
        default: printf("Erro: opção de pagamento inválida!\n"); return 1;
    }
    comissao = valor_final * 0.05;
    printf("Comissão do vendedor: R$ %.2f\n", comissao);
    return 0;
}
