#include <stdio.h>

float calculate(float sum, float i, char op) {
    switch (op) {
        case '+':
            return sum + i;
        case '-':
            return sum - i;
        case '*':
            return sum * i;
        case '/':
            if (i != 0) {
                return sum / i;
            } else {
                printf("Error: Division by zero\n");
                return sum;
            }
    }
}

int main() {
    float x, i, sum = 0;
    char op;
    printf("Initial value: ");
    scanf("%f", &x);
    sum += x;
    getchar();
    printf("\n");
    while (1) {
        printf("Input Operator: ");
        scanf("%c", &op);
        getchar();
        if (op != '+' && op != '-' && op != '*' && op != '/') {
            printf("Finish Calculate\n");
            printf("End Value is %.4f\n", sum);
            break;
        }
        printf("Input Number: ");
        scanf("%f", &i);
        getchar();
        sum = calculate(sum, i, op);
        printf("Present Value = %.4f\n", sum);
        printf("\n");
    }
    return 0;
}