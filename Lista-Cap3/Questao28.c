#include <stdio.h>
#include <math.h>

int main(void) {
    int opcao = 0;
    double salario;

    do {
        printf("\n1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");

        int leitura = scanf("%d", &opcao);
        if (leitura == EOF) {
            return 0;
        }
        if (leitura != 1) {
            int caractere;
            while ((caractere = getchar()) != '\n' && caractere != EOF) {
            }
            opcao = 0;
        }

        switch (opcao) {
            case 1:
            case 2:
                printf("Informe o salario: R$ ");
                leitura = scanf("%lf", &salario);
                if (leitura == EOF) {
                    return 0;
                }
                if (leitura != 1 || !isfinite(salario) || salario <= 0.0) {
                    printf("Erro: informe um salario positivo.\n");
                    if (leitura != 1) {
                        int caractere;
                        while ((caractere = getchar()) != '\n' && caractere != EOF) {
                        }
                    }
                    break;
                }
                if (opcao == 1) {
                    double aumento = salario <= 2000.0 ? 0.15 : 0.10;
                    printf("Novo salario: R$ %.2f\n", salario * (1.0 + aumento));
                } else {

                    double taxa = salario <= 3000.0 ? 0.08 : 0.15;
                    double desconto = salario * taxa;
                    printf("Desconto de IR: R$ %.2f\n", desconto);
                    printf("Salario apos desconto: R$ %.2f\n", salario - desconto);
                }
                break;
            case 3:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opcao invalida. Escolha 1, 2 ou 3.\n");
        }
    } while (opcao != 3);

    return 0;
}
