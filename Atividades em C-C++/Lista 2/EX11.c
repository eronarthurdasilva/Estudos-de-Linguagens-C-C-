#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando a variavel
    int op;
    float a,b;
    printf("----CALCULADORA----");
    //Menu para escolher operação
    printf("\n 1-Soma");
    printf("\n 2-Subtracão");
    printf("\n 3-Divisão");
    printf("\n 4-Multiplicação");
    //SOlicitando ao usuario que escolha a operação que deseja
    printf("\n Escolha uma operação: ");
    //salvando a variavel escolhida
    scanf("%d", &op);
    //Solicitando ao ususario que escolha dois numeros
    printf("\n Digite dois numeros: ");
    //Salvando a variavel
    scanf("%f %f", &a, &b);
    //condição de escolha para cada opção de operação
    switch(op){
    //soma
    case 1:
        printf("\nA soma do seus números é:%.2f ", a+b);
        break;
    //subtração
    case 2:
        printf("\nA subtração dos seus dois números é:%.2f ", a-b);
        break;
    //divisão
    case 3:
        printf("\nA Divisão dos seus dois números é:%.2f ", a/b);
        break;
    //multiplicção
    case 4:
        printf("\nA multiplicação do seus dois números é:%.2f ", a*b);
        break;
    default:
        printf("\nEscolha invalida");
    }


}
