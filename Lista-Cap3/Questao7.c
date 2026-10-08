#include <stdio.h>

void contar_for(void) {
    for (int i = 0; i <= 100; i++) {
        printf("%d%s", i, i == 100 ? "\n" : " ");
    }
}

void contar_while(void) {
    int i = 0;
    while (i <= 100) {
        printf("%d%s", i, i == 100 ? "\n" : " ");
        i++;
    }
}

void contar_do_while(void) {
    int i = 0;
    do {
        printf("%d%s", i, i == 100 ? "\n" : " ");
        i++;
    } while (i <= 100);
}

int main(void) {
    printf("Versao com for:\n");
    contar_for();
    printf("Versao com while:\n");
    contar_while();
    printf("Versao com do-while:\n");
    contar_do_while();
    return 0;
}
