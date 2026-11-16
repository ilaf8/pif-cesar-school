#include <stdio.h>

#define PI 3.14159f

float area(float r);

int main(void) {
    float raio;

    printf("Digite o raio da esfera: ");
    if (scanf("%f", &raio) != 1 || raio < 0.0f) {
        printf("Raio invalido.\n");
        return 1;
    }

    printf("Area da superficie: %.2f\n", area(raio));
    return 0;
}

float area(float r) {
    return 4.0f * PI * r * r;
}
