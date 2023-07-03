#include <stdio.h>
#include <stdlib.h>
#define N 10

/*
Descrição: Procedimento que recebe as notas de 10 alunos e armazena nos vetores
Parâmetros: Vetor flot
*/
void registra_nota (float notas[N]){
    int i;
    printf("Digite as notas dos seus alunos:\n");
    for (i=0; i<N; i++){
        scanf("%f", &notas[i]);

    }
}
/*
Descrição: Procedimento que soma todas as notas e descobre a media dos alunos e quantos alunos ficaram acima da media
Parâmetros: int vetor, flot notas
*/
void calcularmedia (float notas[N]) {
    float media = 0.0;
    for (int i = 0; i < N; i++) {
        media += notas[i];
    }
    media /= N;
    int contador = 0;
    for (int i = 0; i < N; i++) {
        if (notas[i] > media) {
            contador++;
        }
    }
    printf("Media da turma: %.2f\n", media);
    printf("%d alunos obtiveram nota acima da media.\n", contador);
}

int main() {
    float notas[N];
    registra_nota(notas);
    calcularmedia(notas);
    return 0;
}





