//shifting the data of one array to another array using pointers
#include<stdio.h>
int main()
{
  int array1[10]={1,2,3,4,5,6,7,8,9,10};
  int array2[10];
  int *x= array1;
   int *y= array2;
  int i;
  for(i=0;i<10;i++){
  	*(y+9-i)=*(x+i);
  	
  }
  printf("the value of the array1 is copied to array2:");
   for(i=0;i<10;i++){
   	printf("\n%d",array2[i]);
   }
}
