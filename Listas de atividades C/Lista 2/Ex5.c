#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variavel
    int x;
    //Solicita ao usuario que didite 1 número
    printf("Digite um numero \n");
    //Salvando a variavel com o scan
    scanf("%d", &x);
    fflush(stdin);
    //condição numero 1:caso o numero seja positivo aparecerar 1
    if(x>0){
        printf(" 1 ");
    }
    //condição numero 2: caso não seja positivo apareceçar -1
    if(x<0)
        printf(" -1 ");
    else
        printf(" 0 ");

    return 0;
}
