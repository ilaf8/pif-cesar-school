/* Questão 13 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>
#include <math.h>

int main(void) {
    char operacao;
    double a, b, resultado;
    printf("Escolha a operação:\n+ Soma\n- Subtração\n* Multiplicação\n/ Divisão\n^ Potenciação\n");
    if (scanf(" %c", &operacao) != 1) {
        printf("Erro: entrada inválida!\n");
        return 1;
    }
    if (operacao != '+' && operacao != '-' && operacao != '*' &&
        operacao != '/' && operacao != '^') {
        printf("Erro: operação inválida!\n");
        return 1;
    }
    printf("Digite dois operandos reais: ");
    if (scanf("%lf %lf", &a, &b) != 2 || !isfinite(a) || !isfinite(b)) {
        printf("Erro: operandos inválidos!\n");
        return 1;
    }
    switch (operacao) {
        case '+': resultado = a + b; break;
        case '-': resultado = a - b; break;
        case '*': resultado = a * b; break;
        case '/':
            if (b == 0) {
                printf("Erro: divisão por zero!\n");
                return 1;
            }
            resultado = a / b;
            break;
        case '^': resultado = pow(a, b); break;
        default: printf("Erro: operação inválida!\n"); return 1;
    }
    if (!isfinite(resultado)) {
        printf("Erro: resultado fora do domínio real ou do limite numérico!\n");
        return 1;
    }
    printf("Resultado: %.2f\n", resultado);
    return 0;
}
