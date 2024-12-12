#include <stdio.h>

int main() {
    int N = 0, i, j;

    for (j = N; N >= 0; j++) {
        printf("Please input N: ");
        scanf("%d", &N);

        if (N > 0) {
            int sum = 0;
            printf("Factor of n : ");
            for (i = 1; i <= N; i++) {
                if (N % i == 0) {
                    printf("%d ", i);
                    sum += i;
                }
            }
            printf("\nSumation of factor is %d.\n", sum);
        }
        printf("\n");
    } 

    printf("Program End.\n");

    return 0;
}