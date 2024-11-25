#include <stdio.h>

int main() {
    FILE *file;
    char data[256]; 
    file = fopen("lmniitstudent.dat", "a");
    if (file == NULL) {
        printf("Error opening file. Exiting...\n");
        return 1;
}
    printf("Enter the information you want to append to the file:\n");
    fgets(data, sizeof(data), stdin);  
    fprintf(file, "%s", data);
    printf("Information successfully appended to the file!\n");
    fclose(file);

    return 0;
}

