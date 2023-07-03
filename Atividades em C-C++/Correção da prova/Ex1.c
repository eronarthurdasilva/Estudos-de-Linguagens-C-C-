#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void misterio2 (float vet[], int tam, float *y, float *z){
    *z = 0;//Atribui a ao ponteiro Z o valor de Zero
    for (int i = 0; i < tam; i++){
        *z = *z + pow((vet[1] - *y), 2);//Atribui ao z o valor de z mais a pontencia do vetor na prosição i,ate i ser maior que tam
    }
    //z=20
    *z = (float)*z/tam;//z= 20/5
    *z = sqrt (*z);//z= 2
}
void misterio1 (float vet[], int tam, float *x, float *y, float *z){
    *x = 0;//Atribui a 0 no ponteiro x
    for (int i=0; i < tam; i++){
        *x = *x + vet[i];//Atribui a x o valor de x + vetor  na posição i ate i ser maior que tam
        //x =50
    }
    //y= x/5/ y= 10
    *y = *x/(float)tam;//
    misterio2 (vet, tam, y, z);
}

int main(){
    int t = 5;
    float vet[5] = {10,13,11,7,9}, x, y, z;
    misterio1(vet, t, &x, &y,&z);
    //Condição se z/y (2/10>3.0) ira aparecer "Alto 5 50 10 2
    if (z/y>3.0)
        printf("Alto %d %.1f %.f %.1f", t, x, y, z);
    //Se não Aperece "Baixo 2 10 50 5"
    else
        printf("Baixo %.1f %.1f %.1f %d", z, y, x, t);
}
