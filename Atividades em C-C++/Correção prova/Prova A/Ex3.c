#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gasto;
    float minimo=0, medio=0, alto=0 ,maior=0, menor=0, media=0,total=0;
    for(int i=0;i<=10;i++){
        printf("Digite seu gasto em kWh: ");
        scanf("%d",&gasto);
        if(gasto>=30){
            minimo+=45+14;
        }
        else if(gasto>=30 && gasto<=100){
            medio+=(1.90*gasto)+14;
        }
        else if(gasto>=100){
            alto+=(3.95*gasto)+14;
        }
        if(gasto>maior){
            maior=gasto;

        }
        if(gasto<menor){
            menor=gasto;
        }

    }
    total=minimo+medio+alto;
    printf("\nA media a ser paga e %.2f",media=total/10);
    printf("\nO maior valor e %.2f",maior);
    printf("\nO menor valor e %.2f",menor);
}
