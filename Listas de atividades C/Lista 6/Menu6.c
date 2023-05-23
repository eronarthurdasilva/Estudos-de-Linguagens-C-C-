//Menu de Ponteiros e Parãmetros por referencia 
//Bibliotecas usadas no programa 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>//Biblioteca para o uso bool
#define N 10 //Define em 10 a quantidade de vetores
#include <math.h>//Bliblioteca para funções matemáticas
#include <string.h>
/*
Exercício número 1
Discrição: Neste procedimento computa  o maior e o menor valor entre três
Parâmetro: Int num1,  num2, num3, maior, menor
Retorna: Retorna por referencia  
*/
void maior_ou_menor (int num1, int num2, int num3, int *maior, int*menor){
    //Descobre o maior número
    if( num1 > num2 && num1 > num3){
        *maior = num1;


    }
    else if ( num2> num1 && num2 > num3){
        *maior = num2;
    }
    else {
        *maior = num3;
    }
    //Encontra o Menor valor
    if (num1 < num2 && num1 < num3){
        *menor = num1;
    }
    else if (num2 < num1 && num2 < num3){
        *menor = num2;
    }
    else{
        *menor = num3;
    }


}

/*
Exercício 2
Crie um procedimento que receba três valores boleanos e retorne for referencia
o valor verdade
*/
void calcular_verdade (bool a , bool b, bool c, bool *resultado){
    //Diferença de b
    bool aux1 = !b;
    //Resultado da diferença de b e c
    bool aux2 = aux1 ^ c;
    //Resultado da condição a ou resultado de da junção de b e c
    bool aux3 = a || aux2;
    //Resultado final
    *resultado = !aux3;


}

/*
Exercício 3
Descrição: Função que recebe 3 números como parâmetro e calcula e retorna a média e o maxímo
Parâmetro: Float n1, n2, n3, maior
Retorna: float
*/

int mmm (float a, float b, float c, float *maior){




    //Determina o maior e retorna por refrência
    if(a > b && a > c){
        *maior = a;
    }
    else if(b > a && b > c){
        *maior = b;
    }
    else{
        *maior = c;
    }


    //Retorna a média
    return (a+b+c)/3.0;


}

/*
Exercício 4
Descrição: procedimento que lê 3 números que mostra o nome, endereço e valor da variavel
Parâmetros: int a , int b, int c
Retorna: não tem retorno
*/
void endereco_do_endereco (int a, int b, int c ){
    printf("\n Nome \t Endereço \t Valor \nA \t%p \t %d", &a, a);
    printf("\nB \t%p \t %d", &b, b);
    printf("\nC \t%p \t %d", &c, c);
}


/*
Execício 5
Descrição:Procedimento que ler 3 valores dados e coloca nos vetores e mostra seu endereço, valor e posição 
Parâmetros: Vetores inteiros
*/
void mostraposicao (int vetor [N], int tamanho){
    int i;
    ///Mostra a tabela 
    printf("Posicao do vetor\tEndereco\tValor do vetor\n");
    ///Estrutura de repetição para mostrar os valores
    for ( i= 0; i < tamanho; i++) {
        printf("%d\t\t\t%p\t\t%d\n", i, &vetor[i], vetor[i]);
    } 

}
/*
Execício 6
Descrição: Função que mostra os valores de char, int, flout e double 
Parâmetros: Inteiros, flot, double e char
Retorno: int, flot, double e char
*/
void mostra_valores (int a, float b, char nome [100], double c){
    //Declaração de Ponteiros 
    int *ap;
    char *nomep;
    float *bp;
    double *cp;
    //Inicializa com os ponteiros
    ap = &a;//inteiro
    nomep = nome;//char
    bp = &b;//float
    cp = &c;//double
    //Mostra em forma de tabela
    printf("O Endereco do char %s\te %p\tEssa variavel ocupa %lu bytes.\n", nome, &nome, strlen(nome));//Mostra o char 
    printf("O Endereco do int %d\te %p\tEssa variavel ocupa %lu bytes.\n", a, &a, sizeof(a));//mostra o valor em inteiro
    printf("O Endereco do float %.2f\te %p\tEssa variavel ocupa %lu bytes.\n", b, &b, sizeof(b));//Mostra float
    printf("O Endereco do double %.5f\te %p\tEssa variavel ocupa %lu bytes.\n", c, &c, sizeof(c));//Mostra double
    printf("O Endereco do int * %p\te %p\tEssa variavel ocupa %lu bytes.\n", ap, &ap, sizeof(ap));
    printf("O Endereco do char * %p\te %p\tEssa variavel ocupa %lu bytes.\n", nomep, &nomep, sizeof(nomep));
    printf("O Endereco do float * %p\te %p\tEssa variavel ocupa %lu bytes.\n", bp, &bp, sizeof(bp));
    printf("O Endereco do double * %p\te %p0\tEssa variavel ocupa %lu bytes.\n", cp, &cp, sizeof(cp));

}

/*
Exercício 7
Descrição: Função que recebe um parâmetro em um número inteiro Num1 por parâmetro e dois números max e min por 
referência.
Parâmetros; int num1, min, max.
Retorno: return inteiro.
*/
int divisores (int num1, int *min, int *max){
    //condição caso o valor de num1 for menor e igual a 1
    if (num1 <= 1){
        return 1;
    } 
    //condição que verifica se o num1 e divisil por algum número inteiro
    for (int i = 2; i <= sqrt(num1); i++){
        //caso o valor de num1 divido pelo valor de i for igual a zero, não sera primo
        if (num1 % i == 0){
            *max = num1 / i;
            *min = i;
            return 1;
        }

    }
    return 0;//caso o valor por primo 
}
 //Criação do menu 
 int main (){
    int opcao;
    do{
        printf("\n\nLista de Exercicio");
        printf("\n(1) Maior e menor valor por parametro ");
        printf("\n(2) Valor verdade");
        printf("\n(3) Media e maior valor");
        printf("\n(4) Tabela de endereco, valor e nome da variavel ");
        printf("\n(5) Tabela da posicao do vetor, endereco e valor");
        printf("\n(6) Tabela de endereco, tamanho da memoria e valor");
        printf("\n(7) Valor e primo ou nao");
        printf("\n(0) Sair:\n");
        scanf ("%d", &opcao);
        fflush(stdin);
        switch(opcao){
        case (1):
        {
            int n1, n2, n3, maior, menor;
            printf("\nDigite 3 numeros interios: ");
            scanf("%d %d %d", &n1, &n2, &n3);
            fflush(stdin);
            maior_ou_menor (n1, n2, n3, &maior, &menor);
            printf("\nO numero maior e: %d", maior);
            printf("\nO numero menor e: %d", menor); 
            break;
        }
        case (2):
        {
            int a,b,c, resultado;
            printf("\nDigite o valor booleano para A, B e C(Utilize 1 para Verdadeiro e 0 para falso):\n");
            scanf("%d %d %d",&a,&b,&c);
            printf("\nO valor verdade da expressao ~(Av~B^C) eh ");
            calcular_verdade(a, b, c, &resultado);
            if(resultado == 1){
                printf("\nVerdadeira");
            }
            else 
                printf("\nFalso");
            break;
        }
        case (3):
        {
            float num1, num2, num3, media, maximo;
            printf("Digite tres numeros:( a b c) ");
            scanf("%f %f %f", &num1, &num2, &num3);
            fflush(stdin);
            media= mmm(num1,num2,num3, &maximo);
            printf("\nA media e %.2f, e o maior valor e %.2f", media, maximo);
            break;        
        }
        case (4):
        {
            int n1, n2, n3;
            printf("\nDigite 3 numeros inteiros: ");
            scanf("%d %d %d", &n1, &n2, &n3);
            fflush(stdin);
            endereco_do_endereco (n1,n2,n3);
            break;
        }
        case (5):
        {
            int vetor[3];
            int i;
            for (i = 0; i < 3; i++) {
            printf("Digite o valor para a posicao %d: ", i);
            scanf("%d", &vetor[i]);
        }

            mostraposicao(vetor, 3);
            break;

        }
        case (6):
        {
            int n1;
            float n2;
            char nome [10];
            double n3;
            printf("\nDigite um numero inteiro: ");
            scanf("%d", &n1);
            printf("\nDigite um numero em float: ");
            scanf("%f", &n2);
            printf("\nDigite uma palavra: ");
            scanf("%s", &nome);
            printf("\nDigite mais um numero em double: ");
            scanf("%lf", &n3);
            mostra_valores(n1,n2,nome,n3);
            break;

        }
        case (7):
        {
            int n, max, min, resultado;
            printf("\nDigite um numero inteiro: ");
            scanf("%d", &n);
            if(n<=0){
                printf("\nValor invalido, tente novamente");
            }

            resultado = divisores(n, &max, &min);

            if (resultado == 0) {
            printf("%d e um numero primo.\n", n);
            } 
            else {
                printf("%d nao e um numero primo. Seus divisores sao %d e %d.\n", n, max, min);
            }
            break;

        }
        case (0):
            printf("\nAte mais tarde meu caro");
            break;
        default:
                printf("\nOpcao invalida");
                break;
        }   
    }
    while(opcao>0);
    printf("\nPrograma encerrado, Ate logo");
    return 0;
 }
    