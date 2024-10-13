#include <stdio.h>

int main() {
    int Age;
    char Name[60], Country[50];

    printf("\t\tINPUT_OUTPUT\n");
    printf("----------------------------------------------\n");

    printf("Enter your name: ");
    gets(Name);
    printf("Input your age: ");
    scanf("%d", &Age);
    getchar();
    printf("Enter your Country: ");
    gets(Country);
    printf("-----------------------------------------------------------------------\n");

    printf("\tName\t\t\tAge\t\tCountry\n");
    printf("-----------------------------------------------------------------------\n");
    printf("%s\t\t\t%d\t\t%s\n", Name, Age, Country);

    return 0;
}