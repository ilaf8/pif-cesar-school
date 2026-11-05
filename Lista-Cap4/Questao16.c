/* Questão 16 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>
#include <math.h>

int main(void) {
    float distancia, litros, consumo;
    printf("Digite a distância percorrida em km e os litros consumidos: ");
    if (scanf("%f %f", &distancia, &litros) != 2 ||
        !isfinite(distancia) || !isfinite(litros) || distancia < 0 || litros <= 0) {
        printf("Erro: distância deve ser não negativa e litros devem ser positivos!\n");
        return 1;
    }
    consumo = distancia / litros;
    printf("Consumo: %.2f km/l\n", consumo);
    if (consumo < 8.0f) {
        printf("Venda o carro!\n");
    } else if (consumo <= 14.0f) {
        printf("Econômico!\n");
    } else {
        printf("Super econômico!\n");
    }
    return 0;
}
