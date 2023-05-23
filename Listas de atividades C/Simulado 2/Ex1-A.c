#include <stdio.h>
void misterio(int vet[5], int * a, int * b) {
 *a = *b = vet[0];//Atribui á A e B o valor do vetor vet na posição 0 que e 6
 for (int i=0;i<5;i++)//Estrutura sequencial que muda o valor de i ate menor que 5
 if (vet[i] < *a)//Verifica se o vetor em cada posição e menor que o valor do ponteiro a
 *a = vet[i];//caso for menor, atribiu ao a o valor que esta na posição do vetor
 else if (vet[i] > *b)//Verifica se  os valores em cada posição do vetor e maior que b
 *b = vet[i];//caso for maior, ira atribuir ao b este valor 
}
int main()
{
 int k[] = {6, 2, 3, 4, 5};//declara o vetor k e atribiu a ele valores
 int x, y;//declara x e y
 misterio(k, &x, &y);// chama o procedimento misterio
 if (x > y)//condição em que se x for menor que y
 printf("Ola AAA %d %d", x, y);//se for aparecera "ola AAA 2 6"
 else
 printf("Ola BBB %d %d", y, x);//se nao for ira aparecer "ola BBB 6 2"
}