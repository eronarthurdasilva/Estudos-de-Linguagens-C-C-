#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando as variaveis que os valores devem ser salvos
    float valor_investido, taxa_juros, valor_total, juros_rendidos;
    int num_meses;
    //solicitado ao usuario que coloque o valor que deve ser investido
    printf("\n Informe o valor a ser investido: ");
    scanf("%f", &valor_investido);
    //pede ao usuario para que o usuario digite o juros da conta a ser investida
    printf("\n Informe a taxa de juros mensal em porcentagem: ");
    scanf("%f", &taxa_juros);
    taxa_juros /= 100; // Converter taxa para decimal
    //informa o n�mero de meses que ira durar a aplica��o
    printf("\n Informe o numero de meses da aplica�ao: ");
    scanf("%d", &num_meses);
    //formula para c�lcular do valor total acumulado e dos juros rendidos utilizando as f�rmulas de juros compostos
    valor_total = valor_investido * pow(1 + taxa_juros, num_meses);
    juros_rendidos = valor_total - valor_investido;
    //indica ao usuario o acumulo no final do periodo e o valor do jurso rendidos
    printf("Valor total acumulado ao final do periodo: R$ %.2f\n", valor_total);
    printf("Valor de juros rendidos: R$ %.2f\n", juros_rendidos);

}
