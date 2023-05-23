#include <stdio.h>

void inverterLinhas(int matriz[][2], int n) {
    int i, j, temp;
    
    for (i = 0; i < n/2; i++) {
        // troca a linha i com a linha n-i-1
        for (j = 0; j < 2; j++) {
            temp = matriz[i][j];
            matriz[i][j] = matriz[n-i-1][j];
            matriz[n-i-1][j] = temp;
        }
    }
}

int main() {
    int matriz[8][2] = {
        {1, 9},
        {2, 3},
        {3, 4},
        {4, 5},
        {7, 6},
        {5, 4},
        {3, 2},
        {6, 4}
    };
    int i, j;
    
    printf("Matriz Original:\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    inverterLinhas(matriz, 8);
    
    printf("Matriz Modificada:\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
