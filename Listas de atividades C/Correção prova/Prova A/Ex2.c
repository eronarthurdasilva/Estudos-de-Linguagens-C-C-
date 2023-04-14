#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    fflush(stdin);
    if(numero<1){
            printf("numero invalido");
    }
    else
        for(int i=1;i<=numero; i++)
            if(numero%i==0){
                printf(" %d ", i);
            }

}


