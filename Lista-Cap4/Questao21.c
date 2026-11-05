/* Questão 21 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>
#include <math.h>

int main(void) {
    double salario, percentual, aumento;
    int cargo;
    printf("Digite o salário atual: ");
    if (scanf("%lf", &salario) != 1 || !isfinite(salario) || salario <= 0) {
        printf("Erro: salário inválido!\n");
        return 1;
    }
    printf("Cargo: 1 - Técnico | 2 - Gerente | 3 - Demais Cargos\n");
    if (scanf("%d", &cargo) != 1) {
        printf("Erro: entrada inválida!\n");
        return 1;
    }
    switch (cargo) {
        case 1:
            if (salario <= 3000) { percentual = 0.15; }
            else { percentual = 0.10; }
            break;
        case 2:
            if (salario <= 5000) { percentual = 0.10; }
            else { percentual = 0.05; }
            break;
        case 3: percentual = 0.08; break;
        default: printf("Erro: cargo inválido!\n"); return 1;
    }
    aumento = salario * percentual;
    printf("Aumento: R$ %.2f\n", aumento);
    printf("Novo salário: R$ %.2f\n", salario + aumento);
    return 0;
}
