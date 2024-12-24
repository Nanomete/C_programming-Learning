#include <stdio.h>

int main() {

    FILE *file;
    char ch;

    file = fopen("TestRead.txt", "r");

    if (file == NULL) {
        printf("Error to opening file\n");
    } else {
        do {
            ch = getc(file); // take char in textfile to ch variable
            printf("%c", ch); // print character one by one from textfile
        } while (ch != EOF);

        if (fclose(file) == EOF) {
            printf("Error to closing file\n");
        }
    }

    return 0;
}