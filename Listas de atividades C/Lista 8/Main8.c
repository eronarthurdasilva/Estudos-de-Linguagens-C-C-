#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#define Max 10
#define LINHAS 10
#define COLUNAS 5
//ex1
/*
Descrição: Procedimento que recebe os valores digitados pelo usuário ou preenchidos com números aleatorios na matriz
Parâmetro: float matrz
*/

void recebe ( int l, int c, int s, float matrz[][10]){
    int i, j;
    if(s==2){
        for(i=0; i<l; i++){
            for(j=0; j<c; j++){
                scanf("%f",&matrz[i][j]);
            }
        }

    }
    else{
        srand(time(NULL));
        for(i=0; i<c; i++){
            for(j=0; j<l; j++){
                matrz[i][j] = ((float)rand()/(float)(RAND_MAX)) * 100;
            }
        }

    }
}


void imprime_maior (int l, int c, float matrz[][10]){
    float maior = matrz[0][0];
    int jmax = 0, imax = 0;
    for(int i=0; i< c; i++){
        for(int j=0; j<l; j++){
            if(matrz[i][j]>maior){
                maior = matrz[i][j];
                imax = i;
                jmax = j;
            }
        }
    }
    printf("\nO maior valor de %.2f, esta na posicao %d %d", maior, imax, jmax);
}
//ex2
/*
Descrição: Procedimento que recebe uma matriz A de tamanho M e M e calcula a soma dos elementos da diagonal principal, imprime os valores que estão na diagonal principal
em um vator S de tamanho M.
Parâmetros: int A, int S, int M, int opcao
*/
void diagonal(int M, int A[][M], int S[], int opcao) {
    int i, soma = 0;
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
//ex3
/*
Descrição: função que recebe a matriz A e matriz B, faz a soma das duas matrizes e coloca na matriz C
Parâmetros: Int A, Int B, Int C, int N, Int M
Retorno: Int c
*/
void soma_matrizes(int N, int M, int A[][M], int B[][M], int C[][M]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            C[i][j] = A[i][j] + B[i][j]; // Calcula a soma dos elementos das matrizes A e B
        }
    }
}
//ex4
/*
Descrição: função que recebe as matrizes A e B e armazena  na matriz P os valores do produto de A e B
Parâmetros: int A, int B, Int P, Int M, Int n 
*/
void produto_matrizes( int M, int N, int A[][10], int B[][10], int P[][10]) {
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

//ex5
/*
Descrição: função que recebe uma matriz A é verifica se ela e uma matriz de permutação
Parâmetros: int A, int n
Retorna: Booleano 
*/
bool matriz_permutacao (int N, int A [][10]) {
    int i, j, soma_linha, soma_coluna;
    for(i = 0; i < N; i++) {
        soma_linha = 0;
        soma_coluna = 0;
        for(j = 0; j < N; j++) {
            soma_linha += A[i][j];
            soma_coluna += A[j][i];
            if((soma_linha > 1) || (soma_coluna > 1)) {
                return false;
            }
        }
        if((soma_linha == 0) || (soma_linha > 1) || (soma_coluna == 0) || (soma_coluna > 1)) {
            return false;
        }
    }
    return true;
}
//ex6
/*
Descrição:Função que recebe um matriz inteira chamada de quadrado magico, e verifica e a soma dos elementos de cada linha, a soma dos elementos de cada coluna e a soma dos elementos das diagonais principal e
secundária são todos iguais.
Parâmetros: int mat, int n 
Retorna: booleana 
*/
bool verifica_Quadrado_Magico(int n, int mat[Max][Max]) {
    int soma = 0;
    int diag_principal = 0, diag_secundaria = 0;


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
    for (int j = 0; j < Max; j++) {
        int som_colun = 0;
        for (int i = 0; i < Max; i++) {
            som_colun += mat[i][j];
        }
        if (som_colun != soma) {
            return false;
        }
    }

    // Verifica se a soma da diagonal principal é igual à soma de referência
    for (int i = 0; i < Max; i++) {
        diag_principal += mat[i][i];
    }
    if (diag_principal != soma) {
        return false;
    }

    // Verifica se a soma da diagonal secundária é igual à soma de referência
    for (int i = 0; i < Max; i++) {
        diag_secundaria += mat[i][n - 1 - i];
    }
    if (diag_secundaria != soma) {
        return false;
    }

    // Se passou por todas as verificações, a matriz é um quadrado mágico
    return true;
}


//ex7
/*
Descrição:Procedimento que torca linhas, trocas as colunas, diagonais e imprime a matriz
Parâmetros: int l1, int l2, int mat
Retorno:referencia
*/

void trocaLinha(int l1, int l2, int mat[][10]) {
    for (int j = 0; j < 10; j++) {
        int tmp = mat[l1][j];
        mat[l1][j] = mat[l2][j];
        mat[l2][j] = tmp;
    }
}

void trocaColuna(int c1, int c2, int mat[][10]) {
    for (int i = 0; i < 10; i++) {
        int tmp = mat[i][c1];
        mat[i][c1] = mat[i][c2];
        mat[i][c2] = tmp;
    }
}

void trocaDiagonais(int mat[][10]) {
    for (int i = 0; i < 10; i++) {
        int tmp = mat[i][i];
        mat[i][i] = mat[i][10-1-i];
        mat[i][10-1-i] = tmp;
    }
}

void trocaLinhaColuna(int l, int c, int mat[][10]) {
    for (int j = 0; j < 10; j++) {
        int tmp = mat[l][j];
        mat[l][j] = mat[j][c];
        mat[j][c] = tmp;
    }
}

void imprime_Matriz(int mat[][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void alteraMatriz(int mat[][10]) {
    // Troca a linha 2 com a linha 8
    trocaLinha(1, 7, mat);

    // Troca a coluna 4 com a coluna 10
    trocaColuna(3, 9, mat);

    // Troca a diagonal principal com a diagonal secundária
    trocaDiagonais(mat);

    // Troca a linha 5 com a coluna 10
    trocaLinhaColuna(4, 9, mat);
}


//ex8
/*
Descrição:
Parâmetros:
*/

void preencher_matriz (int m, int n, int aleatoria, float matriz[][COLUNAS]) {
    if (aleatoria) {
        // Preenche a matriz com números aleatórios
        srand(time(NULL)); // Define a semente do gerador de números aleatórios
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                matriz[i][j] = (float)rand() / RAND_MAX; // Gera um número aleatório entre 0 e 1
            }
        }
    } else {
        // Preenche a matriz com valores informados pelo usuário
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                printf("Informe o valor da posição [%d][%d]: ", i, j);
                scanf("%f", &matriz[i][j]);
            }
        }
    }
}

void preencher_segunda_ate_ultima_linha(int m, int n, float matriz[][COLUNAS]) {
    for (int i = 1; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = matriz[0][j] * (i + 1);
        }
    }
}

void imprimir_matriz(int m, int n, float matriz[][COLUNAS]) {
    printf("Matriz resultante:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}


//Ex9
/*
Descrição:
Parâmetros:
*/

void soma_area(int mat[10][10]) {
    int i, j, soma = 0;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if ((i <= 4 && j >= 5) || (i >= 5 && j <= 4)) {
                soma += mat[i][j];
            }
        }
    }
    printf("A soma dos elementos da area marcada com '*' eh: %d\n", soma);
}

//Ex10
/*
*/

void calcular_media_area(char matriz[10][10]) {
    int soma = 0;
    int quantidade = 0;
    int i, j;

    for (i = 0; i < 10; i++) {
        j+=1;
        for (j = 0; j < 10; j++) {
            if (matriz[i][j] == '*') {
                soma += matriz[i][j];
                quantidade++;
            }
        }
    }

    float media = (float) soma / quantidade;
    printf("A média dos elementos na área marcada é: %.2f\n", media);
}


/// @return 
int main(){
    int opcao;
    do{
        printf("\n\nLista de Exercicio");
        printf("\n(1) Maior elemento e a sua posição");
        printf("\n(2) Soma dos elementos da diagonal");
        printf("\n(3) Soma da matriz A com a matriz B");
        printf("\n(4) Matriz P");
        printf("\n(5) Matriz de permutação");
        printf("\n(6) Quadrado mágico");
        printf("\n(7) A matriz Z 10x10");
        printf("\n(8) Preenche linha com multiplo de 2 e 3");
        printf("\n(9) Soma dos elementos ");
        printf("\n(10) Média dos elementos");;
        printf("\n(0) Sair");
        printf("\nSelecione o exercicio desejado: ");
        scanf("%d",&opcao);
        fflush(stdin);
        switch(opcao){
            case (1):
            {
                int m, n, s;
                printf("Digite os valores de M e N:");
                scanf("%d %d",&m, &n);
                float mat[m][n];
                printf("\nEscolha: 1- para numeros aleatorios\n 2- preencher valores:\n");
                scanf("%d", &s);
                recebe(m, n, s, mat);
                imprime_maior(m, n, mat);
                break;
            }
            case (2):
            {
                int m, op;
                printf("\nEscolha: 1 - para números aleatórios\n2 - preencher valores:\n");
                scanf("%d", &op);
                printf("Digite o valor de M: ");
                scanf("%d", &m);
                int S[m];
                int A[m][m];
                diagonal(m, A, S, op);
                break;
            }
            case (3):
            {
                int n, M, op;
                printf("Digite as dimensoes da matrize: ");
                scanf("%d %d", &n, &M);

                int A[n][M], B[n][M], C[n][M];
                int i, j;
                printf("\nEscolha:\n1 - para numeros aleatorios\n2 - preencher valores\n");
                scanf("%d", &op);
                if (op == 2){
                    for (i = 0; i < n; i++) {
                        for (j = 0; j < M; j++) {
                            printf("Digite os elementos da matriz A na porsição[%d][%d]:\n",i, j);
                            scanf("%d", &A[i][j]);
                        }
                    }


                    for (i = 0; i < n; i++) {
                        for (j = 0; j < M; j++) {
                            printf("Digite os elementos da matriz B na porsição[%d][%d]:\n",i, j);
                            scanf("%d", &B[i][j]);
                        }
                    }
                }
                else if (op == 1){
                    srand(time(NULL));
                    for (i = 0; i < n; i++) {
                        for (j = 0; j < M; j++) {
                            A[i][j] = rand () %100;
                         }
                     }
                    for (i = 0; i < n; i++) {
                        for (j = 0; j < M; j++) {
                            B[i][j] = rand () %100;
                        }
                    }
                }
                soma_matrizes(n, M, A, B, C);

                printf("Matriz C resultante da soma de A e B:\n");
                for (i = 0; i < n; i++) {
                    for (j = 0; j < M; j++) {
                         printf("%d ", C[i][j]);
                     }
                    printf("\n");
                 }
                 break;
            }
            case (4):
            {
                int m, n, i, j;
                int op;
                printf("Digite o numero de linhas e colunas da matriz A: ");
                scanf("%d %d", &m, &n);

                int A[m][n], B[n][m], P[m][m];
                printf("\nEscolha:\n1 - para numeros aleatorios\n2 - preencher valores\n");
                scanf("%d", &op);
                if (op == 2){
                    for (i = 0; i < m; i++) {
                        for (j = 0; j < n; j++) {
                            printf("Digite os elementos da matriz A na porsição[%d][%d]:\n",i, j);
                            scanf("%d", &A[i][j]);
                        }
                    }
                    for (i = 0; i < n; i++) {
                        for (j = 0; j < m; j++) {
                            printf("Digite os elementos da matriz B na porsição[%d][%d]:\n",i, j);
                            scanf("%d", &B[i][j]);
                        }
                    }
                }
                else if (op == 1){
                    srand(time(NULL));
                    for (i = 0; i < m; i++) {
                        for (j = 0; j < n; j++) {
                             A[i][j] = rand () %100;
                         }
                    }
                    for (i = 0; i < n; i++) {
                        for (j = 0; j < m; j++) {
                            B[i][j] = rand () %100;
                        }
                    }
                }

                produto_matrizes(m, n, A, B, P);

                printf("Matriz resultante do produto de A por B:\n");
                for (i = 0; i < m; i++) {
                    for (j = 0; j < m; j++) {
                    printf("%d ", P[i][j]);
                    }
                    printf("\n");
                }
                break;
            }
            case (5):
            {

            }
            case (6):
            {
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
                break;

            }
            case (7):
            {
                int mat[10][10], op, i , j;

                // Lê a matriz
                printf("\nEscolha:\n1 - para preencher com numeros aleatorios\n2 - preencher valores\n");
                scanf("%d", &op);
                if (op == 2){
                    for (i = 0; i < 10; i++) {
                        for (j = 0; j < 10; j++) {
                            printf("Digite o elemento da matriz[%d][%d]: ", i, j );
                            scanf("%d", &mat[i][j]);
                        }
                    }
                }
                else if (op == 1){
                    srand(time(NULL));
                    for (i = 0; i < 10; i++) {
                        for (j = 0; j < 10; j++) {
                            mat[i][j] = rand() % 100;
                        }
                    }
                }

                // Altera a matriz
                alteraMatriz(mat);

                // Imprime a matriz resultante
                printf("\nMatriz resultante:\n");
                imprime_Matriz(mat);
                break;


            }
            case (8):
            {
                float matriz[LINHAS][COLUNAS];
                int m = LINHAS, n = COLUNAS;
                int aleatoria;
                printf("Informe se deseja preencher a matriz com valores aleatórios (1) ou pelo usuário (0): ");
                scanf("%d", &aleatoria);
                preencher_matriz(m, n, aleatoria, matriz);
                preencher_segunda_ate_ultima_linha( m, n, matriz);
                imprimir_matriz( m, n, matriz);
                break;

            }
            case (9):
            {
                int matriz[10][10], i, j;
                printf("Preencha a matriz 10x10:\n");
                for (i = 0; i < 10; i++) {
                    for (j = 0; j < 10; j++) {
                        scanf("%d", &matriz[i][j]);
                    }
                }
                soma_area(matriz);
                break;

            }
            case (10):
            {
                int matriz[10][10], i, j;
                printf("Preencha a matriz 10x10:\n");
                for (i = 0; i < 10; i++) {
                    for (j = 0; j < 10; j++) {
                        scanf("%d", &matriz[i][j]);
                    }
                }
                soma_area(matriz);
                break;

            }

            
            case (0):
                printf("\nPrograma encerrado");
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