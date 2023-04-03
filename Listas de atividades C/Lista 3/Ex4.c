#include <stdio.h>
#include <stdlib.h>
///codigo para contar quantos números são positivos negativos ou zero
int main()
{
    ///declarando as variaveis
    int n, negativo=0, positivo=0, nulo=0;
    ///solicitando ao usuario que digite
    printf("Digite valores positivos e negaivos inteirios, caso queira parar digite -9999\n");
    ///condição sequencial para calcular a quantidade
    do{
        scanf("%d", &n);
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
    ///mostra o resultado
    printf("\n---------------------------------------------\n");
    printf("\n Tem %d numeros nulos", nulo);
    printf("\n Tem %d numeros negativos", negativo);
    printf("\n Tem %d numeros positivos", positivo);
    return 0;
}
