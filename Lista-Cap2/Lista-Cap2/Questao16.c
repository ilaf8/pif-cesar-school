#include <math.h>
#include <stdio.h>

int main(void) {
    double altura_degrau_cm, altura_total_m, altura_total_cm;
    int quantidade_degraus;

    printf("Digite a altura de cada degrau em centimetros: ");
    if (scanf("%lf", &altura_degrau_cm) != 1 || altura_degrau_cm <= 0.0) {
        fprintf(stderr, "Altura de degrau invalida.\n");
        return 1;
    }

    printf("Digite a altura total desejada em metros: ");
    if (scanf("%lf", &altura_total_m) != 1 || altura_total_m < 0.0) {
        fprintf(stderr, "Altura total invalida.\n");
        return 1;
    }

    altura_total_cm = altura_total_m * 100.0;
    quantidade_degraus = (int)ceil(altura_total_cm / altura_degrau_cm);

    printf("Numero minimo de degraus: %d\n", quantidade_degraus);

    return 0;
}

