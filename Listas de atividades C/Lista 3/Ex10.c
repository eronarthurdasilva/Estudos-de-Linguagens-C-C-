#include <stdio.h>
#include <stdlib.h>

int main() {
    float saldo_Inicial, valor, saldo_Final = 0;
    int operacao, total_Pix_Recebidos = 0, total_Pix_Enviados = 0, total_Saques = 0, total_Depositos = 0;

    // Lê o saldo inicial da conta
    printf("Digite o saldo inicial da conta: ");
    scanf("%f", &saldo_Inicial);
    saldo_Final = saldo_Inicial;

    // Loop para ler as operações financeiras
    while (1) {
        // Lê o tipo de operação e o valor
        printf("\nDigite o tipo de operacao:\n1: deposito em dinheiro\n2: retirada em dinheiro\n3: recebimento em PIX\n4: transferencia em PIX\n5: fim\n");
        scanf("%d", &operacao);
        if (operacao == 5) break;

        printf("Digite o valor: ");
        scanf("%f", &valor);

        // Realiza a operação escolhida
        switch (operacao) {
            case 1: // Depósito em dinheiro
                saldo_Final += valor;
                total_Depositos++;
                break;
            case 2: // Retirada em dinheiro
                saldo_Final -= valor;
                total_Saques++;
                break;
            case 3: // Recebimento em PIX
                saldo_Final += valor;
                total_Pix_Recebidos++;
                break;
            case 4: // Transferência em PIX
                saldo_Final -= valor;
                total_Pix_Enviados++;
                break;
            default: // Operação inválida
                printf("Operacao invalida. Tente novamente.\n");
                break;
        }
    }

    // Imprime o resultado
    printf("\nSaldo inicial: R$%.2f\n", saldo_Inicial);
    printf("Saldo final: R$%.2f\n", saldo_Final);

    if (saldo_Final == 0) {
        printf("CONTA ZERADA\n");
    } else if (saldo_Final > 0) {
        printf("CONTA PREFERENCIAL\n");
    } else {
        printf("CONTA ESTOURADA\n");
    }

    printf("\nTotal de PIX recebidos: %d\n", total_Pix_Recebidos);
    printf("\nTotal de PIX enviados: %d\n", total_Pix_Enviados);
    printf("\nTotal de saques: %d\n", total_Saques);
    printf("\nTotal de depositos em dinheiro: %d\n", total_Depositos);

    return 0;
}

