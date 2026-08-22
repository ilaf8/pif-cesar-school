#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totalSegundos;
    int horas;
    int minutos;
    int segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);

    system("PAUSE");
    return 0;
}