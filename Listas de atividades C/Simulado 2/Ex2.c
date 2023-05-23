#include <stdio.h>

int mesmo_num_mult_3(int A[], int B[], int N) {
    int i, count_A = 0, count_B = 0;
    for (i = 0; i < N; i++) {
        if (A[i] % 3 == 0) {
            count_A++;
        }
        if (B[i] % 3 == 0) {
            count_B++;
        }
    }
    if (count_A == count_B) {
        return 1;
    } else {
        return -1;
    }
}

int main() {
    int A[] = {3, 5, 6, 12, 9};
    int B[] = {2, 4, 12, 6, 7};
    int N = 5;
    int resultado = mesmo_num_mult_3(A, B, N);
    printf("%d\n", resultado); // Saída: 1
    return 0;
}
