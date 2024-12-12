#include <stdio.h>

int main() {
    int A[2][2], B[2][2], C[2][2], i, j;
    
    printf("Enter matrix A size 2x2 : \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter element A[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("Enter matrix B size 2x2 : \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter element B[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j];
        }
    }

    printf("Matrix A * B is\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d", C[i][j]);
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}