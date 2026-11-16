#include <stdio.h>

void exibeMenu(void);

int main(void) {
    int opcao;

    exibeMenu();
    printf("Escolha uma opcao: ");
    if (scanf("%d", &opcao) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    switch (opcao) {
        case 1:
            printf("Opcao selecionada: Cadastrar.\n");
            break;
        case 2:
            printf("Opcao selecionada: Listar.\n");
            break;
        case 3:
            printf("Opcao selecionada: Remover.\n");
            break;
        case 0:
            printf("Saindo do programa.\n");
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}

void exibeMenu(void) {
    printf("\n--- MENU ---\n");
    printf("1 - Cadastrar\n");
    printf("2 - Listar\n");
    printf("3 - Remover\n");
    printf("0 - Sair\n");
}
