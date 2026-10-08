#include <stdio.h>
#include <math.h>

int main(void) {
    double nota;
    double soma = 0.0;
    double menor = 0.0, maior = 0.0;
    int quantidade = 0;

    while (1) {
        printf("Informe uma nota de 0 a 10 (-1 para encerrar): ");
        if (scanf("%lf", &nota) != 1 || !isfinite(nota)) {
            printf("Entrada invalida.\n");
            return 1;
        }
        if (nota == -1.0) {
            break;
        }
        if (nota < 0.0 || nota > 10.0) {
            printf("Nota invalida. Digite um valor de 0 a 10.\n");
            continue;
        }
        if (quantidade == 0) {
            menor = maior = nota;
        } else {
            if (nota < menor) {
                menor = nota;
            }
            if (nota > maior) {
                maior = nota;
            }
        }
        soma += nota;
        quantidade++;
    }

    printf("Total de alunos avaliados: %d\n", quantidade);
    if (quantidade > 0) {
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media geral: %.2f\n", soma / quantidade);
    } else {
        printf("Nenhum aluno avaliado. Nao ha maior, menor ou media.\n");
    }
    return 0;
}
