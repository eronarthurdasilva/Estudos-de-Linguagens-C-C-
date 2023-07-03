#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,aux=1;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if(n<=0){
        printf("\nNumero invalido");
        return 0;
    }
    printf("\nO Triangulo de Floyd de numero de linhas dadas %d e:\n",n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
                printf(" %d",aux);
                aux++;
        }
        printf("\n");
    }
    return 0;
}
