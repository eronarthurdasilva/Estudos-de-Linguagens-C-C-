#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>
#define MAX 10
#define N 10
///EX1
/*
void recebe (int s, int l, int c, float matrz[l][c]){
    int i, j;
    if(s==2){
        for(i=0; i<l; i++){
            for(j=0; j<c; j++){
                scanf("%f",&matrz[j][i]);
            }
        }
    }
    else{
        srand(time(NULL));
        for(i=0; i<l; i++){
            for(j=0; j<c; j++){
                matrz[j][i] = ((float)rand()/(float)(RAND_MAX)) * 100;
            }
        }
    }
}

void imprime_maior (int l, int c, float matrz[l][c]){
    int jmax = 0, imax = 0;
    float maior = matrz[0][0];
    for(int i=0; i<c; i++){
        for(int j=0; j<l; j++){
            if(matrz[j][i]>maior){
                maior = matrz[j][i];
                imax = i;
                jmax = j;
            }
        }
    }
    printf("\nO maior valor de %.2f, esta na posicao %d %d", maior, jmax, imax);
}

int main (){
    int m, n, s;
    printf("Digite os valores de M e N:");
    scanf("%d %d",&m, &n);
    printf("\nEscolha: 1- para numeros aleatorios\n 2- preencher valores:\n");
    scanf("%d", &s);
    float matriz[m][n];
    recebe(s, m, n, matriz);
    imprime_maior(m, n, matriz);
}
*/

///ex2
/*
void diagonal(int M, int A[][M], int S[], int opcao) {
    int i, j, soma = 0;
    if (opcao == 2) {
        for (i = 0; i < M; i++) {
            printf("Digite o elemento A[%d][%d]: ", i, i);
            scanf("%d", &A[i][i]); // lê o elemento da diagonal principal de A
            S[i] = A[i][i]; // armazena o elemento da diagonal principal em S
            soma += A[i][i]; // soma os elementos da diagonal principal
        }
    } else {
        srand(time(NULL));
        for (i = 0; i < M; i++) {
            A[i][i] = rand() % 100;
            S[i] = A[i][i]; // armazena o elemento da diagonal principal em S
            soma += A[i][i]; // soma os elementos da diagonal principal
        }
    }
    printf("\nSoma da diagonal principal: %d\n", soma);
}

int main() {
    int m, op;
    printf("\nEscolha: 1 - para números aleatórios\n2 - preencher valores:\n");
    scanf("%d", &op);
    printf("Digite o valor de M: ");
    scanf("%d", &m);
    int S[m];
    int A[m][m];
    diagonal(m, A, S, op);
    return 0;
}
*/
//Ex3
/*
void soma_matrizes(int N, int M, int A[][M], int B[][M], int C[][M]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            C[i][j] = A[i][j] + B[i][j]; // Calcula a soma dos elementos das matrizes A e B
        }
    }
}

int main() {
    int N, M, op;
    printf("Digite as dimensoes da matrize: ");
    scanf("%d %d", &N, &M);

    int A[N][M], B[N][M], C[N][M];
    int i, j;
    printf("\nEscolha:\n1 - para numeros aleatorios\n2 - preencher valores\n");
    scanf("%d", &op);
    if (op == 2){

        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) {
                printf("Digite os elementos da matriz A na porsição[%d][%d]:\n",i, j);
                scanf("%d", &A[i][j]);
            }
        }


        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) {
                printf("Digite os elementos da matriz B na porsição[%d][%d]:\n",i, j);
                scanf("%d", &B[i][j]);
            }
        }
    }
    else if (op == 1){
        srand(time(NULL));
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) {
                A[i][j] = rand () %100;
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) {
                B[i][j] = rand () %100;
            }
        }
    }
    soma_matrizes(N, M, A, B, C);

    printf("Matriz C resultante da soma de A e B:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/
///ex4
/*
void produto_matrizes(int M, int N, int A[][N], int B[][M], int P[][M]) {
    int i, j, k;

    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            P[i][j] = 0; // inicializa o elemento da matriz P com 0
            for (k = 0; k < N; k++) {
                P[i][j] += A[i][k] * B[k][j]; // calcula o produto de A por B
            }
        }
    }
}

int main() {
    int M, N, i, j, op;
    printf("Digite o numero de linhas e colunas da matriz A: ");
    scanf("%d %d", &M, &N);

    int A[M][N], B[N][M], P[M][M];
    printf("\nEscolha:\n1 - para numeros aleatorios\n2 - preencher valores\n");
    scanf("%d", &op);
    if (op == 2){
        for (i = 0; i < M; i++) {
            for (j = 0; j < N; j++) {
                printf("Digite os elementos da matriz A na porsição[%d][%d]:\n",i, j);
                scanf("%d", &A[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) {
                printf("Digite os elementos da matriz B na porsição[%d][%d]:\n",i, j);
                scanf("%d", &B[i][j]);
            }
        }
    }
    else if (op == 1){
        srand(time(NULL));
        for (i = 0; i < M; i++) {
            for (j = 0; j < N; j++) {
                A[i][j] = rand () %100;
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) {
                B[i][j] = rand () %100;
            }
        }
    }

    produto_matrizes(M, N, A, B, P);

    printf("Matriz resultante do produto de A por B:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            printf("%d ", P[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/
///ex6
/*
bool verifica_Quadrado_Magico(int n, int mat[MAX][MAX]) {
    int soma = 0, diag1 = 0, diag2 = 0;

    // Calcula a soma da primeira linha, usada como referência
    for (int j = 0; j < n; j++) {
        soma += mat[0][j];
    }

    // Verifica se a soma de cada linha é igual à soma de referência
    for (int i = 1; i < n; i++) {
        int soma_das_linhas = 0;
        for (int j = 0; j < n; j++) {
            soma_das_linhas += mat[i][j];
        }
        if (soma_das_linhas != soma) {
            return false;
        }
    }

    // Verifica se a soma de cada coluna é igual à soma de referência
    int som_colun;
    for (int j = 0; j < n; j++) {
        int som_colun = 0;
        for (int i = 0; i < n; i++) {
            som_colun += mat[i][j];
        }
        if (som_colun != soma) {
            return false;
        }
    }

    // Verifica se a soma da diagonal principal é igual à soma de referência
    int diag_principal = 0;
    for (int i = 0; i < n; i++) {
        diag_principal += mat[i][i];
    }
    if (diag_principal != soma) {
        return false;
    }

    // Verifica se a soma da diagonal secundária é igual à soma de referência
    int diag_secundaria = 0;
    for (int i = 0; i < n; i++) {
        diag_secundaria += mat[i][n - 1 - i];
    }
    if (diag_secundaria != soma) {
        return false;
    }

    // Se passou por todas as verificações, a matriz é um quadrado mágico
    return true;
}

int main() {
    int n, op=0, i, j;
    //solicita ao usuario o tamanho da matriz
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &n);
    int mat[n][n];
    printf("\nEscolha:\n1 - para numeros aleatorios\n2 - preencher valores\n");
    scanf("%d", &op);
    if (op == 2){
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                printf("Digite o elemento da matriz[%d][%d]: ", i, j );
                scanf("%d", &mat[i][j]);
            }
        }
    }
    else if (op == 1){
        srand(time(NULL));
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                mat[i][j] = rand() % 100;
            }
        }
    }

    if (verifica_Quadrado_Magico(n, mat)) {
        printf("quadrado magico\n");
    } else {
        printf("nao quadrado magico\n");
    }
    return 0;
}
*/
///Ex7
/*
void trocaLinha(int mat[][N], int l1, int l2) {
    for (int j = 0; j < N; j++) {
        int tmp = mat[l1][j];
        mat[l1][j] = mat[l2][j];
        mat[l2][j] = tmp;
    }
}

void trocaColuna(int mat[][N], int c1, int c2) {
    for (int i = 0; i < N; i++) {
        int tmp = mat[i][c1];
        mat[i][c1] = mat[i][c2];
        mat[i][c2] = tmp;
    }
}

void trocaDiagonais(int mat[][N]) {
    for (int i = 0; i < N; i++) {
        int tmp = mat[i][i];
        mat[i][i] = mat[i][N-1-i];
        mat[i][N-1-i] = tmp;
    }
}

void trocaLinhaColuna(int mat[][N],int l, int c) {
    for (int j = 0; j < N; j++) {
        int tmp = mat[l][j];
        mat[l][j] = mat[j][c];
        mat[j][c] = tmp;
    }
}

void imprimeMatriz2(int mat[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void alteraMatriz(int mat[][N]) {
    // Troca a linha 2 com a linha 8
    trocaLinha(mat, 1, 7);

    // Troca a coluna 4 com a coluna 10
    trocaColuna(mat, 3, 9);

    // Troca a diagonal principal com a diagonal secundária
    trocaDiagonais(mat);

    // Troca a linha 5 com a coluna 10
    trocaLinhaColuna(mat, 4, 9);
}

int main() {
    int mat[N][N], op, i , j;

    // Lê a matriz
    printf("\nEscolha:\n1 - para preencher com numeros aleatorios\n2 - preencher valores\n");
    scanf("%d", &op);
    if (op == 2){
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                printf("Digite o elemento da matriz[%d][%d]: ", i, j );
                scanf("%d", &mat[i][j]);
            }
        }
    }
    else if (op == 1){
        srand(time(NULL));
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                mat[i][j] = rand() % 100;
            }
        }
    }

    // Altera a matriz
    alteraMatriz(mat);

    // Imprime a matriz resultante
    printf("\nMatriz resultante:\n");
    imprimeMatriz2(mat);

    return 0;
}
*/
///EX8

