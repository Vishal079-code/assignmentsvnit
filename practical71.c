//find the pivot element of a sorted and rotatted array using binary search
#include <stdio.h>
int findPivotIndex(int arr[], int start, int end) {
    if (start == end) {
        return start;
    }
    int mid = start + (end - start) / 2;
    if (mid > start && arr[mid] < arr[mid - 1]) {
        return mid;
    }
    if (mid < end && arr[mid] > arr[mid + 1]) {
        return mid + 1;
    }
    if (arr[start] <= arr[mid]) {
        return findPivotIndex(arr, mid + 1, end);
    } else {
        return findPivotIndex(arr, start, mid - 1);
    }
}

int main() {
 int n,i;
    printf("enter the size of array :");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
    	printf("enter the element %d :",i+1);
    	scanf("%d",&array[i]);
	}
    
    
    printf("the array is ");
    for(i=0;i<n;i++)
    {
    	printf(" %d ",array[i]);
	}
    int pivotIndex = findPivotIndex(array, 0, n - 1);
    printf("The pivot element is: %d\n", array[pivotIndex]);
    return 0;
}

