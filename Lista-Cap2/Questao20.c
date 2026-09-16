#include <math.h>
#include <stdio.h>

int main(void) {
    double lado_a, lado_b, hipotenusa;

    printf("Digite os valores dos dois catetos: ");
    if (scanf("%lf %lf", &lado_a, &lado_b) != 2 ||
        lado_a <= 0.0 || lado_b <= 0.0) {
        fprintf(stderr, "Valores dos catetos invalidos.\n");
        return 1;
    }

    hipotenusa = sqrt(lado_a * lado_a + lado_b * lado_b);

    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}

