#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Processo para medir o IMC do usuario
    float P, A, IMC;
    printf("\n Digite seu peso em kg \n");//solicita que o usuario coloque seu peso
    scanf("%f", &P);//salvando o valor do peso
    printf("\n Digite suas altura em metros com virgula ex:1.77 \n");//solicitando que o usuario coloque sua altura
    scanf("%f", &A);
    fflush(stdin);
    IMC = P/(A*A);
    // Calcula o IMC do usuario
    printf("\nO Seu IMC e %f \n", IMC);
    // Indica o valor o imc
    if(IMC >24,9){
        // Valor acima do peso ideal{
        printf("\n e voce está acima do peso ideal", IMC);// diz que caso o valor for maior que 24,9 o usuario esta acima do peso ideal
  }
    // indica o usuario que ele esta no peso ideal
    else if(IMC >=18,5 && IMC <25){
        printf("\n voce esta no peso ideal ");
  }
    // avisa o grau de obsidade do usuario em 1, quando o valor do IMC estiver menor ou igual a 30 e maior que 35
    else if(IMC >= 30 && IMC < 35) {
        printf("Obesidade grau 1.\n");
    }
    // avisa o grau de obesidade do usario em grau 2, quando o valor do IMC estiver menor e igual a 35 e maior que 40
    else if(IMC >= 35 && IMC < 40) {
        printf("Obesidade grau 2.\n");
    }
    else {
        printf("Obesidade grau 3.\n");
    }

}
