//program to copy the given string to another string in reverse order using pointers
#include<stdio.h>
#include<string.h>
int reverse(char*x,char*y,int size)
{
int i;
for(i=0;i<size;i++)	
{
	*(y+i)=*(x+size-1-i);
}
     *(y + size) = '\0';
}
int main()
{
	char string1[10000];
	char string2[10000];
	int size,i;
	printf("input a string:");
	fgets(string1,10000,stdin);
	printf("finding reverse of the string by copying into another string using pointers:");
	printf("\n string1 is %s ",string1);
	size=strlen(string1);
	reverse(string1,string2,size);
	
		printf("\n string2 is %s ",string2);
		return;


	
}
