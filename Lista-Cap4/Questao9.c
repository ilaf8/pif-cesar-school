/* Questão 9 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>

int main(void) {
    double trabalho, avaliacao, exame, media;
    printf("Digite as notas do trabalho, da avaliação e do exame: ");
    if (scanf("%lf %lf %lf", &trabalho, &avaliacao, &exame) != 3 ||
        !(trabalho >= 0 && trabalho <= 10) ||
        !(avaliacao >= 0 && avaliacao <= 10) ||
        !(exame >= 0 && exame <= 10)) {
        printf("Erro: informe três notas de 0 a 10!\n");
        return 1;
    }
    media = (trabalho * 2 + avaliacao * 3 + exame * 5) / 10.0;
    printf("Média ponderada: %.2f\n", media);
    if (media < 3.0) {
        printf("Reprovado\n");
    } else if (media < 5.0) {
        printf("Em Recuperação\n");
    } else {
        printf("Aprovado\n");
    }
    return 0;
}
