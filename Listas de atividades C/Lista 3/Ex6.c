#include <stdio.h>
#include <stdlib.h>
///codigo de calculo do produto
int main()
{
    ///Declarando a variável
    int n, produto;
    printf("Digite qualquer  valor inteiro:  ");
    do{



        scanf("%d", &n);
        if(n==0){
           printf("\n Programa encerrado");
           break;
        }
        produto*=n;


    }
    while(n!=0);
    printf("\n O valor do produto é: %d", produto);
    return 0;

}
