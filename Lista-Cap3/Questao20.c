#include <stdio.h>

int main(void) {
    printf("Decimal  Hexadecimal  Caractere\n");
    for (int codigo = 32; codigo <= 126; codigo++) {
        printf("%7d  %11X  %c\n", codigo, (unsigned int)codigo, codigo);
    }
    return 0;
}
