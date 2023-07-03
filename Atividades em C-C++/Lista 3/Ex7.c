#include <stdio.h>
#include <stdlib.h>
///programa para escrever termos como seguencia fibonacci
int main()
{
    ///declarando variáveis
    int f, n1=0,n2=1, soma;
    ///solicita ao usuario o valor e salva
    printf("Digite quantas frequencia deseja: ");
    scanf("%d", &f);
    ///mostra os primeiros termos
    printf("\nOs primeiros termos são:%d %d\n", n1,n2);
    ///seguencia for para calcular a formula
    for(int i=1; i<=f; i++){
        soma=n1+n2;
        printf(" %d", soma);
        n1=n2;
        n2=soma;
    }
    return 0;

}
