#include<stdio.h>
 int mystrlen( char array[]){
	
	int i,count=0,max=100;
	for(i=0;i<max;i++)
	{
		if(array[i]!='\0')
		{
			count++;
		}
		else
		{
			break;
		}
	}
	return count;
}
int main()
{
	char array[100];
	 int length;
	printf("please enter the string :");
	fgets(array,100,stdin);
	length=mystrlen(array);
	printf("the length of the string is :%d",length-1);
	return 0;
}
