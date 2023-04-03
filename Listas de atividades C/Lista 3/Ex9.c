#include <stdio.h>
#include<stdlib.h>

int main() {
    ///Declaração de variaveis int e float
    float preco_Compra, preco_Venda, lucro,total_Compra = 0, total_Venda = 0, total_Lucro = 0;;
    int cont_Lucro10 = 0, cont_Lucro20 = 0, cont_Mercadorias = 0;
    ///Sequencia do enquanto o valor digitado nao for 0
    do {
        ///solicita ao usuario os valores de compra
        printf("\nDigite o preco de compra da mercadoria \n(Caso queira encerrar digite 0)\n ");
        scanf("%f", &preco_Compra);
        ///Caso o valor for difetente de zero
        if (preco_Compra != 0) {
            ///solicita ao usuario o valor da venda
            printf("\nDigite o preco de venda da mercadoria\n ");
            scanf("%f", &preco_Venda);
            ///Caso o valor da venda for maior que o da compra da erro
            if (preco_Compra > preco_Venda) {
                printf("Erro: preco de compra deve ser menor que o preco de venda");
                continue;
            }
            ///transformando o valor de lucro em porcentagem
            lucro = (preco_Venda - preco_Compra) / preco_Compra * 100;
            ///Calculando o total de compra, venda e lucro
            total_Compra += preco_Compra;
            total_Venda += preco_Venda;
            total_Lucro += preco_Venda - preco_Compra;
            cont_Mercadorias++;///quantidade de mercadoria escrita
            ///separando os lucros por menor que 10 e maior que 10 e menor que 20
            if (lucro < 10) {
                cont_Lucro10++;
            } else if (lucro >=10 && lucro <= 20) {
                cont_Lucro20++;
            }
        }
    } while (preco_Compra != 0);///fim da sequencia
    ///Mostra os valores desejados
    printf("\nQuantidade de mercadorias com lucro abaixo de 10%%: %d", cont_Lucro10);
    printf("\nQuantidade de mercadorias com lucro entre 10%% e 20%%: %d", cont_Lucro20);
    printf("\nQuantidade de mercadorias com lucro acima de 20%%: %d", cont_Mercadorias - cont_Lucro10 - cont_Lucro20);
    printf("\nValor total de compra das mercadorias: %.2f", total_Compra);
    printf("\nValor total de venda das mercadorias: %.2f", total_Venda);
    printf("\nLucro total: %.2f\n", total_Lucro);

    return 0;
}

