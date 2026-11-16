#include <stdio.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main(void) {
    float preco, pago, subtotal, total, troco;
    int quantidade, opcaoPagamento;

    printf("Preco unitario: R$ ");
    if (scanf("%f", &preco) != 1 || preco < 0.0f) {
        printf("Preco invalido.\n");
        return 1;
    }

    printf("Quantidade: ");
    if (scanf("%d", &quantidade) != 1 || quantidade <= 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    printf("Forma de pagamento (1 - A vista, 2 - A prazo): ");
    if (scanf("%d", &opcaoPagamento) != 1 ||
        (opcaoPagamento != 1 && opcaoPagamento != 2)) {
        printf("Forma de pagamento invalida.\n");
        return 1;
    }

    printf("Valor pago: R$ ");
    if (scanf("%f", &pago) != 1 || pago < 0.0f) {
        printf("Valor pago invalido.\n");
        return 1;
    }

    subtotal = calculaSubtotal(preco, quantidade);
    total = aplicaDesconto(subtotal, opcaoPagamento);
    troco = calculaTroco(total, pago);

    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);

    if (troco < -0.005f) {
        printf("Pagamento insuficiente. Faltam R$ %.2f\n", -troco);
    } else {
        printf("Troco: R$ %.2f\n", troco < 0.0f ? 0.0f : troco);
    }

    return 0;
}

float calculaSubtotal(float preco, int quantidade) {
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento) {
    if (opcaoPagamento == 1) {
        return valor * 0.90f; // 10% de desconto a vista
    }
    return valor;
}

float calculaTroco(float total, float pago) {
    return pago - total;
}
