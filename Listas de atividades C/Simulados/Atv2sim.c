#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, aux1,aux2;
    printf("Digite um numero qualquer inteiro: ");
    scanf("%d", &num);
    if(num<0){
        printf("\nOvalor e negativo, não valido para o codigo");

    }
    else{
        num=num/10;
        aux1=num%10;
    }
    while(num>0){
        num=num/10;
        aux2=num%10;
    }
    printf("\nA soma do primeiro termo e do ultimo termo e: %d ", aux1+aux2);
    return 0;
}
