#include <stdio.h>

int main(void) {
    const int senha_secreta = 2026;
    int senha;

    for (int tentativa = 1; tentativa <= 3; tentativa++) {
        printf("Tentativa %d de 3. Digite a senha: ", tentativa);
        int leitura = scanf("%d", &senha);
        if (leitura == EOF) {
            return 0;
        }
        if (leitura == 1 && senha == senha_secreta) {
            printf("Acesso Concedido!\n");
            printf("Tentativas utilizadas: %d\n", tentativa);
            return 0;
        }
        if (leitura != 1) {
            int caractere;
            while ((caractere = getchar()) != '\n' && caractere != EOF) {
            }
        }
        printf("Senha incorreta.\n");
    }
    printf("Conta Bloqueada por Seguranca!\n");
    return 0;
}
