#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///declarando as variaveis
    int n, negativo=0, positivo=0, nulo=0;
    float total=0;
    ///solicitando ao usuario que digite
    printf("Digite valores positivos e negaivos inteirios, caso queira parar digite -9999\n");
    ///condição sequencial para calcular a quantidade
    do{
        scanf("%d", &n);
        total++;
        ///nulos caso n for igual a 0
        if(n==0){
            nulo++;
        }
        ///negativos caso n for menor que 0
        else if(n<0){
            negativo++;
        }
        ///positivos caso n for maior que zero
        else if(n>0){
            positivo++;
        }

    }
    ///Caso o valor seja -9999 a sequencia paa
    while(n!=-9999);
    ///mostra o resultado em porcentagem
    printf("\n---------------------------------------------\n");
    printf("\n Tem %.2f numeros nulos", nulo/total*100);
    printf("\n Tem %.2f numeros negativos", negativo/total*100);
    printf("\n Tem %.2f numeros positivos", positivo/total*100);
    return 0;

}
