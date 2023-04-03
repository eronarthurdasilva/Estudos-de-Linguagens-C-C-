#include <stdio.h>
#include <stdlib.h>
///Programa que faça a  tabuada de 1 a 9
int main()
{
    ///Declarando a variavel inteira 1 e n
    float i=1,n;
    ///Ira mostrar a logo da tabuada
    printf("-------Tabuada de 1 a 9-------");

    do{
        n=1;
    ///Ira aparecer todass as formulas da tabuada
    do{
        ///Soma
        printf("\n%g+%g=%g", i, n, i+n);
        ///Subtração
        printf("\t%g-%g=%g", i, n, i-n);
        ///Multiplicação
        printf("\t%g*%g=%g", i, n, i*n);
        ///Divisão
        printf("\t%g/%g=%.2g", i, n, i/n);
        n++;
    }
    ///Condição para que se o numero n for menor e igual a 10 ira incrementar i vale mais 1
    while(n<10);
    i++;
    printf("\n");
    }
    ///condição se i for maior ou igual a 9 para o sistema
    while(i<=9);


    return 0;
}
