#include <stdio.h>
#include <stdlib.h>

int main()
{
    // O processo a seguir demonstra a soma, a media e o produto de 3 notas
    float n1, n2, n3, soma, med, prod;// salva as variaveis como números reais, soma, divisão e produto
    printf("Digite as notas\n");//solicita ao usuario que digite suas notas
    scanf("%f %f %f", &n1, &n2, &n3);
    fflush(stdin);// limpa a linha
    soma = n1+n2+n3;// soma os valores das notas 1, 2 e 3
    med = n1+n2+n3/3;//tira a media das notas 1, 2, e 3
    prod = soma*(n1+n2+n3);// acha os produtos da notas
    printf("\n A soma das suas notas e %2f", soma);//demonstra o valor da soma das notas
    printf("\n O media das suas notas e %f \n", med);//demonstra o valor da media das notas
    printf("\n O produto das suas notas e %f \n", prod);//demonstra o valor do produto das notas
}
