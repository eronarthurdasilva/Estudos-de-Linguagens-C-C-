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
    if(op>1 && op<4){//caso seja a opção errada
        printf("\nOperação invalida");
    }
    else if(op==1){//soma
        printf("\nA soma dos seus dois valores é;%.1f", a+b);
    }
    else if(op==2){//subtração
        printf("\nA subtração dos seus dois valores é;%.1f", a-b);
    }
    else if(op==3){//divisão
        printf("\nA divisão dos seus dois valores é;%.1f", a/b);
    }
    else if(op==4){//multiplicação
        printf("\nA multiplicação dos seus dois valores é;%.1f", a*b);
    }
}
