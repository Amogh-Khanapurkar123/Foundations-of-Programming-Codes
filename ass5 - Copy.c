#include <stdio.h>

int main()
{
    int sum[2][2];

    int mat1[2][2] = { {1, 2}, {3, 4} };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    int mat2[2][2] = { {9, 1}, {7, 8} };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("Sum of matrices:\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

