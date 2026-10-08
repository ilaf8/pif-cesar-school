#include <stdio.h>
#include <math.h>

int main(void) {
    double nota = -1.0;
    int valida;

    do {
        printf("Informe uma nota entre 0.0 e 10.0: ");
        int leitura = scanf("%lf", &nota);
        if (leitura == EOF) {
            return 0;
        }
        valida = leitura == 1 && isfinite(nota) && nota >= 0.0 && nota <= 10.0;
        if (!valida) {
            printf("Erro: nota invalida. Tente novamente.\n");
            if (leitura != 1) {
                int caractere;
                while ((caractere = getchar()) != '\n' && caractere != EOF) {
                }
            }
        }
    } while (!valida);

    printf("Nota registrada com sucesso!\n");
    return 0;
}
