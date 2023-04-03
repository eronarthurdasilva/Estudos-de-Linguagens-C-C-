#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Declarando as variáveis
    int num=0, impar=0, par=0;
    ///Solicitando
    printf(" Digite valores inteiros por espaço, caso queria encerrar digite um valor maior que 1000:\n ");
    ///Sequencia para dividir os valores escritos
    while(num<1000){
        ///Salva as variaveis
        scanf("%d", &num);
        ///Condição caso o número seja maior que 1000, encerra o programa
        if(num>=1000){
            printf("Programa encerrado\n");
        }
        else if(num%2==0){///impares
            par+=num;
        }
        else if(num%2==1){///pares
            impar+=num;
        }
    }
    ///Mostra o resultado
    printf("\nA soma dos pares e:%d", par);
    printf("\nA soma dos impares e:%d", impar);
    return 0;
}
