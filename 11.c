#include <stdio.h>

int main() {
    int A[4][4] = {
        {3, 4, 5, 5},
        {5, 6, 7, 9},
        {1, 7, 11, 10},
        {2, 8, 9, 4}
    };

    int B[4][4] = {
        {1, 2, 3, 4},
        {8, 7, 6, 5},
        {9, 10, 11, 2},
        {6, 5, 4, 3}
    };

    int C[4][4] = {0};
    int i, j, k;

    // Perkalian matriks
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            for (k = 0; k < 4; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Tampilkan hasil
    printf("Hasil perkalian matriks:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%6d", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
