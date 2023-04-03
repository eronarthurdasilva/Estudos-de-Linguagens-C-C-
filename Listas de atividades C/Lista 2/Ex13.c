#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração de variavel
    float X1, Y1, X2, Y2, d;
    //solicita ao usuario que informe os valores da primiera cordenada
    printf("Digite as coordenadas do ponto P1 (x1, y1):\n");
    //salvando as variavies
    scanf("%f %f", &X1, &Y1);
    //Solicita ao usuario que informe os valores da segunda cordenada
    printf("Digite as coordenadas do ponto P2 (x2, y2):\n");
    //salvando as variaveis
    scanf("%f %f", &X2, &Y2);
    //condição caso os valores sejam iguais
    if (X1 == X2 && Y1 == Y2) {
        printf("Os pontos são iguais.\n");
        return 0;
    }
    d = (X1 - X2) + (Y1 - Y2);
    //mostra a distancia de Manhattan entre os dois pontos
    printf("A distância de Manhattan entre os pontos P1 e P2 é: %.2f\n", d);

    return 0;


}
