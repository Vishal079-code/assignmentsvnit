//program to write the data about the marks of the 5 students and calucate the sum of their marks calculate the hishest marks persubject and total
#include <stdio.h>

int main() {
    int array[10][3], sum[10];
    int i, maxsub1, maxsub2, maxsub3, maxsum;
    int index1 = -1, index2 = -1, index3 = -1, index4 = -1;

    for (i = 0; i < 10; i++) {
        printf("Enter the marks of subject 1 for student %d: ", i + 1);
        scanf("%d", &array[i][0]);
        printf("Enter the marks of subject 2 for student %d: ", i + 1);
        scanf("%d", &array[i][1]);
        printf("Enter the marks of subject 3 for student %d: ", i + 1);
        scanf("%d", &array[i][2]);
        sum[i] = array[i][0] + array[i][1] + array[i][2];
    }

    maxsub1 = array[0][0];
    maxsub2 = array[0][1];
    maxsub3 = array[0][2];
    maxsum = sum[0];
    index1 = index2 = index3 = index4 = 0;

    for (i = 0; i < 10; i++) {
        if (array[i][0] > maxsub1) {
            maxsub1 = array[i][0];
            index1 = i;
        }
        if (array[i][1] > maxsub2) {
            maxsub2 = array[i][1];
            index2 = i;
        }
        if (array[i][2] > maxsub3) {
            maxsub3 = array[i][2];
            index3 = i;
        }
        if (sum[i] > maxsum) {
            maxsum = sum[i];
            index4 = i;
        }    
    }

    printf("The max marks obtained in subject 1 is %d scored by student %d.\n", maxsub1, index1 + 1);
    printf("The max marks obtained in subject 2 is %d scored by student %d.\n", maxsub2, index2 + 1);
    printf("The max marks obtained in subject 3 is %d scored by student %d.\n", maxsub3, index3 + 1);
    printf("The max marks obtained in the sum of all subjects is %d scored by student %d.\n", maxsum, index4 + 1);

    return 0;
}

