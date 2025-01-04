#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char Input[40], *Name[3];
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter name : ");
        fgets(Input, sizeof(Input), stdin);
        Name[i] = malloc(strlen(Input) + 1);
        strcpy(Name[i], Input);
    }
    for (i = 0; i < 3; i++) {
        printf("Name #%d : %s", i + 1, Name[i]);
    }

    return 0;
}