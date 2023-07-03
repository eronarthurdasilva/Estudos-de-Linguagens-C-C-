#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando as variaveis
    float x,y,z;
    //solicitando ao usuario os valores de cada lado do triangulo dado como x, y e z
    printf("\nDigite o valor de um dos primeiro lado do triangulo: ");
    //salvando as primeira variaveis
    scanf("%f", &x);
    printf("\nDigite o valor de um do segundo lado do triangulo: ");
    //salvando as segunda variaveis
    scanf("%f", &y);
    printf("\nDigite o valor de um do terceiro laado do triangulo: ");
    //salvando as terceira variaveis
    scanf("%f", &z);
    //Primeira condição para saber se correspónde a um triangulo
    if(x + y > z && x + z > y && y + z > x){
       printf("\nOs valores correspondem a um Triangulo");
        //segundo caso saber se e um equilatero
        if(x==y && y==z){
            printf("\nO triangulo e um equilatero");
       }
       //terceiro caso sabera se é um isoceles
       else if(x==y && x==z && y==z){
        printf("\nO triângulo e um isosceles");
       }
       //caso nenhuma codição acima for verdadeira ira ser um triangulo escaleno
       else{
        printf("\nO triângulo e um escaleno");
     }
}
    //caso nao seja um triangulo
    else{
        printf("\nOs valores nao sao de um triangulo");
        }

    return 0;
}
