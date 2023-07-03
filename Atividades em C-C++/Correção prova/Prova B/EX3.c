
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    char codigo;
    int valor,valorTotal=0,valorPrazo=0,valorVista=0;
    for(int i=0;i<15;i++){
        printf("\nDigite o codigo da operacao: ");
        scanf("%c",&codigo);
        fflush(stdin);

        if(codigo=='v' || codigo=='V'){
            printf("Digite o valor da compra: ");
            scanf("%d",&valor);
            valorTotal+=valor;
            valorVista+=valor;
            fflush(stdin);
            continue;
        }
        if(codigo=='p' || codigo=='P'){
            printf("Digite o valor da compra: ");
            scanf("%d",&valor);
            valorTotal+=valor;
            valorPrazo+=valor;
            fflush(stdin);
            continue;
        }
        else{
            printf("Codigo invalido");
            i--;
        }

    }
    printf("O valor total das compras eh %d\nO valor total das compras a prazo eh %d\nO valor total das compras a vista eh %d",valorTotal,valorPrazo,valorVista);
    return 0;
}

