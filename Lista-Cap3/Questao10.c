#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 100; i++) {
        printf("%d", i * 3);
        if (i % 10 == 0) {
            printf("\n");
        } else {
            printf("\t");
        }
    }
    return 0;
}
