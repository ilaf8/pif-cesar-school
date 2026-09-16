#include <stdio.h>

int main(void) {
    double celsius, fahrenheit, kelvin;

    printf("Digite a temperatura em graus Celsius: ");
    if (scanf("%lf", &celsius) != 1) {
        fprintf(stderr, "Entrada invalida.\n");
        return 1;
    }

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    kelvin = celsius + 273.15;

    printf("Fahrenheit: %.2f F\n", fahrenheit);
    printf("Kelvin: %.2f K\n", kelvin);

    return 0;
}

