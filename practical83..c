// creating a function to read an array and find out the maximum
#include <stdio.h>

int findMax(int array[], int size) {
    int max = array[0];
    int i;
    for ( i = 1; i < size; i++) {
        if (arr[i] > max) {
		max = array[i];}
    }
    return max;
}

int main() {
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements:\n");
    for ( i = 0; i < n; i++) {	
	printf("\nenter the element %d:",i+1);
	scanf("%d", &array[i]);
	}
    printf("The maximum value is: %d\n", findMax(arr, n));
    return 0;
}

