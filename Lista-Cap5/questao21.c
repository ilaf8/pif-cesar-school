#include <stdio.h>

#define SQR(x) ((long long)(x) * (x))
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int main(void) {
    int a, b;

    printf("Digite dois inteiros: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    // As macros recebem variaveis, evitando efeitos colaterais.
    // SQR usa long long para evitar overflow nas entradas do tipo int.
    printf("Quadrado de %d: %lld\n", a, SQR(a));
    printf("Quadrado de %d: %lld\n", b, SQR(b));
    printf("Maior: %d\n", MAX(a, b));
    printf("Menor: %d\n", MIN(a, b));

    return 0;
}
