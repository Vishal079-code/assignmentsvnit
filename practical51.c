//to print the pattern like 10000,01000,00100,00010,00001......etc
#include <stdio.h>

int main() {
    int i, n, j;
    printf("Please enter the number up to which you have to print the pattern: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(j == i) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }
    
    return 0;
}




