//shifting the data of one array to another array using pointers
#include<stdio.h>
int main()
{
  int array[10]={1,2,3,4,5,6,7,8,9,10};
  int array2[10];
  int *x;
  x=&array[0];
 // printf("%p\n",&array[0]);
  //printf("%p",x);
  int i,j=0;
  for(i=0;i<10;i++){
  	array2[i]=*(x+i);
  	
  }
  printf("the value of the array is copied to array2:");
   for(i=0;i<10;i++){
   	printf("\n%d",array2[i]);
   }
}
