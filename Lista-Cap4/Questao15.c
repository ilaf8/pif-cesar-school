/* Questão 15 - Lista Capítulo 4 - PIF 2026.2 */
#include <stdio.h>

int main(void) {
    int idade, tempo;
    printf("Digite a idade e o tempo de serviço em anos: ");
    if (scanf("%d %d", &idade, &tempo) != 2 || idade < 0 || tempo < 0 || tempo > idade) {
        printf("Erro: idade ou tempo de serviço inválido!\n");
        return 1;
    }
    /* Condições didáticas fornecidas pelo exercício. */
    if (idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25)) {
        printf("O trabalhador pode se aposentar.\n");
    } else {
        printf("O trabalhador não pode se aposentar.\n");
    }
    return 0;
}
