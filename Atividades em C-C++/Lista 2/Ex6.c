#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando as variaveis
    float x,y;
    //solicitando ao usuario aos valores
    printf("Digite o valor de x e y \n");
    //salvando as variaveis pelo scanf
    scanf("%f %f", &x,&y);
    //primeira codição
    if(x<0 && y>0){//segundo quadrante
        printf("O valor no plano cartesiano se encontra no 2° quadrante");
    }
    //segunda condição
    if(x>0 && y>0){//primeiro quadrante
        printf("O valor no plano cartesiano se encontra no 1° quadrante");

    }
    //terceira codição
    if(x<0 && y<0)//Terceiro quadrante
        printf("O valor no plano cartesiano se encontra no 3° quadrante");
    //Ultima condição
    else //quarto quadrante
        printf("O valor no plano cartesiano se encontra no 4° quadrante");

}

