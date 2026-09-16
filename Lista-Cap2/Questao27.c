#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int dado1, dado2, dado3;

    srand((unsigned int)time(NULL));

    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;
    dado3 = rand() % 6 + 1;

    printf("Resultados dos tres dados: %d, %d e %d\n", dado1, dado2, dado3);

    return 0;
}

