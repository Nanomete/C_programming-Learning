#include <stdio.h>

void DrawPartTop(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf(" ");
        }
        for (j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void DrawPartMiddle(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 3 * n; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void DrawPartBottom(int n) {
    int i, j;
    for (i = 0; i < 2 * n; i++) {
        for (j = 0; j < n; j++) {
            printf(" ");
        }
        for (j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int FindNumberStar (int n) {
    return (n * n) + (n * 3 * n) + (2 * n * n);
}

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    DrawPartTop(n);
    DrawPartMiddle(n);
    DrawPartBottom(n);
    printf("Number of stars : %d\n", FindNumberStar(n));
    return 0;
}