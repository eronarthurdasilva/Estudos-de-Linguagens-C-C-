#include <stdio.h>
#include <stdlib.h>
///Programa para ler um numero e ter a soma real de todos eles
int main()
{
    ///Declarando a variaveis inteiro
    int n, den=1, numer=1;
    ///Declarando a variavel real
    float soma;
    ///Solicitando ao Usuario que digite um número
    printf("Digite um numero inteiro: ");
    ///Salvando o valor dado pelo ususario
    scanf("%d", &n);
    ///usando Uma estrutura de repetição
    while(numer<2*n){
    ///Formula para a soma real dos valores dados
        soma+=(float)numer/den;
    ///incrementação do numerador e denominador
        numer+=2;
        den+=1;
}
    printf("%.2f", soma);
return 0;
}
