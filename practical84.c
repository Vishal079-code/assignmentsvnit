//to read the data of book a display it
#include <stdio.h>

int display(char info[100][4][100], int n) {
    printf("Book Name: %s", info[n][0]);
    printf("Author's Name: %s", info[n][1]);
    printf("Type of Book: %s", info[n][2]);
    printf("Year of Publishing: %s", info[n][3]);
    return 0;
}

int main() {
    char info[100][4][100];
    int a, option,i;

    while (1) {
        printf("Press 1 to read, 2 to display, or 0 to exit: ");
        scanf("%d", &option);
        getchar();

        if (option == 0) {
            break;
        }

        if (option == 1) {
            printf("You chose to read. Enter the book number (0 to 99): ");
            scanf("%d", &a);
            getchar();
            
            if (a < 0 || a >= 100) {
                printf("Error occurred. Please enter a valid number between 0 and 99.\n");
                continue;
            }

            for (i = 0; i < 4; i++) {
                if (i == 0) 
				printf("Enter book name: ");
                else if (i == 1) 
				printf("Enter author's name: ");
                else if (i == 2)
				 printf("Enter the type of book: ");
                else if (i == 3) 
				printf("Enter the year of publishing: ");
                
                fgets(info[a][i], 100, stdin);
            }
            printf("Congratulations! Your data about the book is successfully stored.\n");
        } else if (option == 2) {
            printf("You chose to display. Enter the book number (0 to 99): ");
            scanf("%d", &a);
            getchar();
            
            if (a < 0 || a >= 100) {
                printf("Error occurred. Please enter a valid number between 0 and 99.\n");
                continue;
            }
            display(info, a);
        } else {
            printf("You entered an invalid option.\n");
        }
    }

    return 0;
}

