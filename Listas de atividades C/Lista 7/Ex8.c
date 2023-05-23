#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
Descrição: procedimento que receba dois vetores x e y de 10 posição.
Parâmetros: vetor, int x, int y
*/

void preencheVetores(int x[], int y[]) {
    printf("Digite os valores para o vetor X:\n");
    for (int i = 0; i < 10; i++) {
        printf("X[%d]: ", i);
        scanf("%d", &x[i]);
    }
    
    printf("\nDigite os valores para o vetor Y:\n");
    for (int i = 0; i < 10; i++) {
        printf("Y[%d]: ", i);
        scanf("%d", &y[i]);
    }
}
/*
Descrição: Procedimento que intercala os valores dos 10 vetores de x e y
Parâmetros: int x, int y, int z
*/
void intercalaVetores(int x[], int y[], int z[]) {
    int posicaoZ = 0;
    for (int i = 0; i < 10; i++) {
        z[posicaoZ++] = x[i];
        z[posicaoZ++] = y[i];
    }
}
/*
Descrição: recebe os valores dos vetores e imprimi o vetor inteiro z de forma intercalada
Parâmetros: int v, int tamanho
*/

void exibeVetor(int v[], int tamanho) {
    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int X[10], Y[10], Z[20];
    preencheVetores(X, Y);
    intercalaVetores(X, Y, Z);
    exibeVetor(Z, 20);
    return 0;
}
