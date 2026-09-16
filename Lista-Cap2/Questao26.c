#include <stdio.h>

int main(void) {
    double comprimento, largura, preco_metro;
    double perimetro, metros_arame, custo_total;

    printf("Digite o comprimento e a largura do terreno em metros: ");
    if (scanf("%lf %lf", &comprimento, &largura) != 2 ||
        comprimento < 0.0 || largura < 0.0) {
        fprintf(stderr, "Dimensoes invalidas.\n");
        return 1;
    }

    printf("Digite o preco do metro de arame: R$ ");
    if (scanf("%lf", &preco_metro) != 1 || preco_metro < 0.0) {
        fprintf(stderr, "Preco invalido.\n");
        return 1;
    }

    perimetro = 2.0 * (comprimento + largura);
    metros_arame = 3.0 * perimetro;
    custo_total = metros_arame * preco_metro;

    printf("Perimetro do terreno: %.2f m\n", perimetro);
    printf("Quantidade de arame para 3 fios: %.2f m\n", metros_arame);
    printf("Custo total: R$ %.2f\n", custo_total);

    return 0;
}

