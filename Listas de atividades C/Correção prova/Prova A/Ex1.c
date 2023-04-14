#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    ///Declaração de variaveis
    int x,y,z;
    ///Todas as Variaveis valem 12
    x=y=z=12;
    ///y=12^2=144
    y=pow(z,2);
    ///Subtrai 1 do valor de x (12-1=11)
    x--;
    ///Z e igual a subtração de 144-1 (143)
    z=y--;
    ///z vale 11-1 (10)
    z=--x;
    ///y e igual a 143/4(35)
    y/=4*1;
    ///z e igual se x for maior que y e 10 se nao for e 35
    z=(x>y?x:y);
    ///se y for menor que x ira printar 10 ,35 ,35, 1
    if(y<x)
        printf("%d %d %d %d",x,y,z,1*1);
    ///se não ira printar 1, 35, 35, 10
    else
        printf("%d %d %d %d",1*1,z,y,x);


}
