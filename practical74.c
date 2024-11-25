//given two arrays a and b which are already sorted now convert the array into 3rd array c which should be sorted again
#include <stdio.h>

int main() {
    int i, j, arrayC[20], swap;
    int arrayA[] = {1, 4, 7, 11, 16, 21, 35, 40, 47, 60};
    int arrayB[] = {2, 3, 8, 10, 14, 23, 43, 55, 80, 99};

    for (i = 0; i < 20; i++) {
        if (i < 10)
            arrayC[i] = arrayA[i];
        else
            arrayC[i] = arrayB[i - 10];
    }

    for (i = 0; i < 20; i++) {
        for (j = 0; j < 19 - i; j++) {
            if (arrayC[j] > arrayC[j + 1]) {
                swap = arrayC[j + 1];
                arrayC[j + 1] = arrayC[j];
                arrayC[j] = swap;
            }
        }
    }

    printf("The array after sorting is: ");
    for (i = 0; i < 20; i++) {
        printf("%d", arrayC[i]);
        if (i < 19) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}

