#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Declaranção de variaveis
    int anos=0, a=5000000,b=7000000;
    ///Sequencia para calcular enquanto a e menor ou igual a b
    while(a<=b){
        a*=1.03;///Cidade A
        b*=1.02;///Cidade B
        anos++;///Tempo
    }
    ///Mostra o resultado
    printf("\nA quantidade de tempo necessaria e de %d anos",anos);
    return 0;
}
