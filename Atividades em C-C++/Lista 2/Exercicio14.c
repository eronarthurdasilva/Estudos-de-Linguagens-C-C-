#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração das variveis
    int numero_parafusos;
    float desconto1;
    float desconto2;
    float desconto3;
    float desconto4;
    printf("Digite o números de parafusos ");
    scanf("%d", &numero_parafusos);
    if(numero_parafusos<=0)
        printf("Numero de parafusos esta errado \npor favor, digite novamente");
    else{
        if(numero_parafusos>101);
            printf("o valor total da sua compra e %.2f", numero_parafusos*0.50);
        if(numero_parafusos<=101 && numero_parafusos>=200)
            printf("o valor total da sua compra e %.2f", numero_parafusos*0.50/0.10);
        if(numero_parafusos<=201 && numero_parafusos>=300)
            printf("o valor total da sua compra e %.2f", numero_parafusos*0.50/0.20);
        if(numero_parafusos<=301 && numero_parafusos>=400)
            printf("o valor total da sua compra e %.2f", numero_parafusos*0.50/0.30);
        if(numero_parafusos<=401)
            printf("o valor total da sua compra e %.2f", numero_parafusos*0.50/0.40);
    }

    return 0;
}
