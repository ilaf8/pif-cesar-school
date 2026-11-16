#include <stdio.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);
void exibeMenu(void);

int main(void) {
    int opcao;
    float a, b, resultado;

    exibeMenu();
    printf("Escolha uma operacao: ");
    if (scanf("%d", &opcao) != 1) {
        printf("Opcao invalida.\n");
        return 1;
    }

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida.\n");
        return 1;
    }

    printf("Digite dois valores: ");
    if (scanf("%f %f", &a, &b) != 2) {
        printf("Valores invalidos.\n");
        return 1;
    }

    switch (opcao) {
        case 1:
            resultado = soma(a, b);
            break;
        case 2:
            resultado = subtrai(a, b);
            break;
        case 3:
            resultado = multiplica(a, b);
            break;
        case 4:
            if (b == 0.0f) {
                printf("Nao existe divisao por zero.\n");
                return 1;
            }
            resultado = divide(a, b);
            break;
        default:
            return 1;
    }

    printf("Resultado: %.2f\n", resultado);
    return 0;
}

void exibeMenu(void) {
    printf("\n1 - Somar\n2 - Subtrair\n3 - Multiplicar\n4 - Dividir\n");
}

float soma(float a, float b) {
    return a + b;
}

float subtrai(float a, float b) {
    return a - b;
}

float multiplica(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
