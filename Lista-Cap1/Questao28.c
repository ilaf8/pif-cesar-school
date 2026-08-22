#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    double media;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    media = (a + b + c) / 3.0;

    printf("Media: %.2f\n", media);

    system("PAUSE");
    return 0;
}