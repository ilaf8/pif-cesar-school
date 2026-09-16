#include <stdio.h>

int main(void) {
    int hora_inicio, minuto_inicio, segundo_inicio;
    long long duracao, total_segundos;
    int hora_final, minuto_final, segundo_final;

    printf("Digite a hora de inicio: ");
    if (scanf("%d", &hora_inicio) != 1) {
        fprintf(stderr, "Hora invalida.\n");
        return 1;
    }

    printf("Digite os minutos de inicio: ");
    if (scanf("%d", &minuto_inicio) != 1) {
        fprintf(stderr, "Minutos invalidos.\n");
        return 1;
    }

    printf("Digite os segundos de inicio: ");
    if (scanf("%d", &segundo_inicio) != 1) {
        fprintf(stderr, "Segundos invalidos.\n");
        return 1;
    }

    printf("Digite a duracao do experimento em segundos: ");
    if (scanf("%lld", &duracao) != 1) {
        fprintf(stderr, "Duracao invalida.\n");
        return 1;
    }

    if (hora_inicio < 0 || hora_inicio > 23 ||
        minuto_inicio < 0 || minuto_inicio > 59 ||
        segundo_inicio < 0 || segundo_inicio > 59 || duracao < 0) {
        fprintf(stderr, "Os valores informados estao fora dos limites validos.\n");
        return 1;
    }

    total_segundos = (long long)hora_inicio * 3600
                   + minuto_inicio * 60
                   + segundo_inicio
                   + duracao;

    total_segundos %= 24LL * 3600LL;
    hora_final = (int)(total_segundos / 3600);
    minuto_final = (int)((total_segundos % 3600) / 60);
    segundo_final = (int)(total_segundos % 60);

    printf("Horario de termino: %02d:%02d:%02d\n",
           hora_final, minuto_final, segundo_final);

    return 0;
}

