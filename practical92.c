//finding the max of n given integers
#include<stdio.h>
int mymax(int *x, int size){
	int i=1;
	int max=*x;
	for(;i<size;i++){
		if(*(x+i)>max)
		max=*(x+i);
	}
	return max;
}
 int main(){
 	int n;
 	printf("please enter the number of inputs :");
 	scanf("%d",&n);
 	int array[n];
 	int i;
 	printf("to find max\n");
 	for(i=0;i<n;i++){
 		printf("enter the input:");
 		scanf("%d",&array[i]);
 		
}
printf("the max among the integers is :%d",mymax(array,n));
 }
