#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#define N 10
#define n 8
//Ex1
/*
Descrição: Função que recebe 10 elementos em vetores e retorna o segundo maior
Parâmetro: Int ve
Retorna: int
*/
int segundoMaior (int vet[N]){
    int maior = vet[0], menor = vet[0], segundoM = 0;
    int i;
    for(i=0; i<10; i++){
        if(vet[i] > maior){
            maior = vet[i];

        }
    }
    for (i=0; i<10; i++){
        if(vet[i]< menor){
            menor = vet[i];
        }
        else if(vet[i]<= maior || vet[i]> menor){
            segundoM = vet[i];
        }
    }
    return segundoM;
}
//Ex2
/*
Descrição: Função que recebe uma string e retorna de forma booleana se a string
está de forma coerente a biblioteca
Parãmetros: char, bool
Retorna: booll
*/
bool lerdescricao (char *descricao){
    int len = strlen(descricao);
    int num_count = 0;
    int point_count = 0;
    int space_count = 0;
    int uppercase_count = 0;
    int lowercase_count = 0;

    if (len != 15) {
        return 0;
    }

    for (int i = 0; i < len; i++) {
        if (isdigit(descricao[i])) {
            num_count++;
        } else if (descricao[i] == '.') {
            point_count++;
        } else if (descricao[i] == ' ') {
            space_count++;
        } else if (isupper(descricao[i])) {
            uppercase_count++;
        } else if (islower(descricao[i])) {
            lowercase_count++;
        } else {
            return 0;
        }
    }

    if (num_count != 9 || point_count != 2 || space_count != 1 || uppercase_count != 1 || lowercase_count != 2) {
        return false;
    }

    return true;

}
//Ex4
/*
Descrição: procedimento que recebe uma matriz com as idades por parâmetros e preencha
um vetor do tipo real tambem recebido por parametro, e preencha o veor com a media de 
idades de cada aluno
Parâmetros: int idade, int media
*/
void media_idades( int idades[n][n], float medias[n]) {
    for (int i = 0; i < n; i++) {
        float soma = 0.0;
        for (int j = 0; j < n; j++) {
            soma += idades[j][i];
        }
        medias[i] = soma / n;
    }
}
//EX5
/*
Descrição: Procedimento que recebe os um vetor e a matriz do exercicio anterior e
mostra a quantidade de pessoa que estão abaixo da media
Parâmetros: int vetor, int matriz
*/
void AbaixoDaMedia (int idades[n][n], float medias[n]){
    int cont=0, i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(idades[j][i] < medias[i]){
                cont++;
            }
        }
    }
    printf("\nO numero de alunos que tem idade menor que a media e: %d", cont);
}
 int main(){
    int opcao;
    do{
        printf("\n\nLista de Exercicio");
        printf("\n(1) Segundo maior ");
        printf("\n(2) Classificacao decimal Dewey e alfanumerica Cutter");
        printf("\n(3) Preenche vetor com media de alunos");
        printf("\n(4) Numero de alunos com valores abaixo da media ");
        printf("\n(0) Sair:\n");
        scanf ("%d", &opcao);
        fflush(stdin);
        switch(opcao){
            case (1):
            {
                int vetor[N];
                int i;
                srand(time(NULL));
                for (i = 0; i < N; i++) {
                     vetor[i] = rand() % 100; // gera número aleatório entre 0 e 99
                }
                int segundoM = segundoMaior(vetor);
                printf("Segundo maior elemento: %d\n", segundoM);
                break;
            }
            case (2):
            {
                char call_number;
                printf("\nDigite numero da chamada que deseja:");
                scanf("%s", call_number);
                if (lerdescricao(call_number)) {
                     printf("%s é um número de chamada válido\n", call_number);
                } 
                else{
                    printf("%s não é um número de chamada válido\n", call_number);
                }

                if (lerdescricao(call_number)) {
                    printf("%s é um número de chamada válido\n", call_number);
                } 
                else {
                    printf("%s não é um número de chamada válido\n", call_number);
                 }

                if (lerdescricao(call_number)) {
                    printf("%s é um número de chamada válido\n", call_number);
                }
                else {
                     printf("%s não é um número de chamada válido\n", call_number);
                }
                break;
            }
            case (3):
            {
                int matr[n][n];
                float vet[n];
                int i, j;
                srand(time(NULL));
                for( i=0; i < n ; i++){
                    for( j=0; j < n ; j++){ 
                        matr[i][j] = rand() % 100; 
                    }
                }
                media_idades(matr,vet);
                for (int i = 0; i < n; i++) {
                    printf("Média de idades da fileira %d e: %.2f\n", i, vet[i]);
                }
                break;
            }
            case (4):
            {
                int matr[n][n];
                float vet[n];
                int i, j;
                srand(time(NULL));
                for( i=0; i < n ; i++){
                    for( j=0; j < n ; j++){ 
                        matr[i][j] = rand() % 100; 
                    }
                }
                media_idades(matr, vet);
                AbaixoDaMedia(matr, vet);
                break;

            }
            case (0):
            {
                printf("\nAte mais tarde meu caro");
                break;
            }
            default:
                printf("\nOpcao invalida");
                break;
        }   
    }
    while(opcao>0);
    printf("\nPrograma encerrado, Ate logo");
    return 0;
 }
          