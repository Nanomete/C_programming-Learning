#include <stdio.h>
#include <string.h> // for function of string

int main() {
    FILE *file;
    char ch[100];
    file = fopen("Test2.txt", "w");

    if (file == NULL) {
        printf("Error opening file\n");
    } else {
        printf("Please input text: ");
        scanf("%s", ch);
        int len = strlen(ch);
        
        for (int i = 0; i < len; i++) {
            fputc(ch[i], file);
        }

        if (fclose(file) == EOF) {
            printf("Error closing file\n");
        }
    }

    return 0;
}
