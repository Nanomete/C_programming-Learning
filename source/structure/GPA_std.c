#include <stdio.h>
#include <string.h> // for function of string

struct std {
    long int ID;
    char name[50];
    float GPA;
};

struct std Inputstds() {
    struct std v;
    printf("Enter ID : ");
    scanf("%ld", &v.ID);
    printf("Enter Name : ");
    getchar();
    fgets(v.name, sizeof(v.name), stdin);
    v.name[strcspn(v.name, "\n")] = '\0';
    printf("Enter GPA : ");
    scanf("%f", &v.GPA);
    return v;
}

int main() {
    struct std stds[5];
    long int Input_ID;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter student #%d\n", i + 1);
        stds[i] = Inputstds();
    }

    while (1) {
        printf("Enter an ID to search for (-1 to quit): ");
        scanf("%ld", &Input_ID);
        if (Input_ID == -1) {
            break;
        }
        int found = 0;
        for (i = 0; i < 5; i++) {
            if (stds[i].ID == Input_ID) {
                printf("ID: %ld\n", stds[i].ID);
                printf("Name: %s\n", stds[i].name);
                printf("GPA: %.2f\n", stds[i].GPA);
                found = 1;
                break;
            }
        }   
        if (!found) {
            printf("ID not found\n");
        }
    }
    return 0;
}