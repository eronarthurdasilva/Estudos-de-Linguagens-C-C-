#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, n1=0,n2=1, soma=0;
    printf("Digite o numero de termos que deseja: ");
    scanf("%d",&numero);
    if(numero<0){
        printf("\nNumero invalido");
    }
    else{
        for(int i=1;i<=numero;i++){
                soma=n1+n2;
                printf("\n%d",soma);
                n1=n2;
                printf("\n%d",n1);
                n2=soma;
                printf("\n%d",n2);
    }


    }
    printf("\n O resultado da escala de fibonacci e igual a %d",soma);
    return 0;

}
