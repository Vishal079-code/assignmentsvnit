//program to input votes and ANNOUNCE THE RESULT AND PRINT SPOILTBALLOT TOO.......
#include <stdio.h>

int main() {
    int i, max, a, spoiltballot = 0;
    int candidate1 = 0, candidate2 = 0, candidate3 = 0, candidate4 = 0, candidate5 = 0;
    int voting[5];
    int index = 0;

    printf("Please enter the number of voters: ");
    scanf("%d", &a);
    int array[a];

    for (i = 0; i < a; i++) {
        printf("Please vote for the candidate (1-5): ");
        scanf("%d", &array[i]);
        if (array[i] == 1) candidate1++;
        else if (array[i] == 2) candidate2++;
        else if (array[i] == 3) candidate3++;
        else if (array[i] == 4) candidate4++;
        else if (array[i] == 5) candidate5++;
        else spoiltballot++;
    }

    voting[0] = candidate1;
    voting[1] = candidate2;
    voting[2] = candidate3;
    voting[3] = candidate4;
    voting[4] = candidate5;

    max = voting[0];
    index = 0;
    for (i = 1; i < 5; i++) {
        if (voting[i] > max) {
            max = voting[i];
            index = i;
        }
    }

    printf("The number of the spoilt ballot is %d\n", spoiltballot);
    printf("The candidate who won with the maximum number of votes is %d with %d votes\n", index + 1, max);

    return 0;
}

