#include <stdio.h>

float mediaPonderada(float n1, float n2, float n3);
void exibeSituacao(float media);

int main(void) {
    float n1, n2, n3, media;

    printf("Digite as tres notas: ");
    if (scanf("%f %f %f", &n1, &n2, &n3) != 3 ||
        n1 < 0.0f || n1 > 10.0f ||
        n2 < 0.0f || n2 > 10.0f ||
        n3 < 0.0f || n3 > 10.0f) {
        printf("Notas invalidas. Informe valores de 0 a 10.\n");
        return 1;
    }

    media = mediaPonderada(n1, n2, n3);
    printf("Media ponderada: %.2f\n", media);
    exibeSituacao(media);
    return 0;
}

float mediaPonderada(float n1, float n2, float n3) {
    return (n1 * 2.0f + n2 * 3.0f + n3 * 5.0f) / 10.0f;
}

void exibeSituacao(float media) {
    if (media >= 5.0f) {
        printf("Situacao: Aprovado\n");
    } else if (media >= 3.0f) {
        printf("Situacao: Em Recuperacao\n");
    } else {
        printf("Situacao: Reprovado\n");
    }
}
