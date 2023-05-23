#include <stdio.h>

#define ROWS 3
#define COLS 3

void calc_produto_impar(int A[][COLS], int B[][COLS]) {
    int i, j;
    int produto = 1;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            if (A[i][j] % 2 == 1 && B[i][j] % 2 == 1) {
                produto *= A[i][j] * B[i][j];
            }
        }
    }
    printf("O produto dos elementos impares e: %d\n", produto);
}

void calc_num_menores(int A[][COLS], int B[][COLS]) {
    int i, j;
    int somaA = 0, somaB = 0;
    int num_menoresA = 0, num_menoresB = 0;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            somaA += A[i][j];
            somaB += B[i][j];
        }
    }
    float mediaA = (float)somaA / (ROWS * COLS);
    float mediaB = (float)somaB / (ROWS * COLS);
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            if (A[i][j] < mediaA) {
                num_menoresA++;
            }
            if (B[i][j] < mediaB) {
                num_menoresB++;
            }
        }
    }
    printf("O numero de elementos menores que a media na matriz A e: %d\n", num_menoresA);
    printf("O numero de elementos menores que a media na matriz B e: %d\n", num_menoresB);
}

int main() {
    int A[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[ROWS][COLS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    calc_produto_impar(A, B);
    calc_num_menores(A, B);
    return 0;
}
