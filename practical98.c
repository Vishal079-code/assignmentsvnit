//finding product of two matrics using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>

int main() {
    int i, j, k;
    int mat1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int mat2[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    int *ptr = (int*)calloc(9, sizeof(int));
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                ptr[i * 3 + j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    printf("the multiplication of the array is:\n");
    for(i = 0; i < 9; i++) {
        printf("%d ", ptr[i]);
        if((i + 1) % 3 == 0) {
            printf("\n");
        }
    }
    free(ptr);
    return 0;
}

