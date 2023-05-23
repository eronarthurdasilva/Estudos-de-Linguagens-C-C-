#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAM 10

void preencheVetor(int x[]);
int* copiaNegativos(int x[], int *tamNovoVetor);
void exibeVetor(int v[], int tam);

int main(){
    int vetorX[TAM];
    preencheVetor(vetorX);

    int *vetorNegativos;
    int tamNovoVetor = 0;
    vetorNegativos = copiaNegativos(vetorX, &tamNovoVetor);

    printf("\nVetor original:\n");
    exibeVetor(vetorX, TAM);

    printf("\nVetor com numeros negativos:\n");
    exibeVetor(vetorNegativos, tamNovoVetor);

    free(vetorNegativos);

    return 0;
}

void preencheVetor(int x[]){
    printf("Digite %d valores para preencher o vetor:\n", TAM);
    for(int i=0; i<TAM; i++){
        scanf("%d", &x[i]);
    }
}

int* copiaNegativos(int x[], int *tamNovoVetor){
    int *vetorNegativos = (int*) malloc(TAM * sizeof(int));
    int indiceNovoVetor = 0;
    for(int i=0; i<TAM; i++){
        if(x[i] < 0){
            vetorNegativos[indiceNovoVetor] = x[i];
            indiceNovoVetor++;
        }
    }
    *tamNovoVetor = indiceNovoVetor;
    return vetorNegativos;
}

void exibeVetor(int v[], int tam){
    printf("[ ");
    for(int i=0; i<tam; i++){
        printf("%d ", v[i]);
    }
    printf("]\n");
}
