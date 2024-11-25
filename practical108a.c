//program to copy 1 string to another
#include<stdio.h>
int mystrlen(char string[50]){
	int i=0,count=0;
	while(string[i]!='\0'){
		count++;
		i++;
	}
	return count;
}
void mystrcpy(char*x,char*y,int size)
{
  	int i;
  	for(i=0;i<size;i++)
  	{
  	*(y+i)=*(x+i);	
	  }
	  return;
}
int main(){
	char string1[50];
	printf("enter the string 1:");
	fgets(string1,50,stdin);
	char string2[50];
	printf("string 1 is copied in string 2\n");
	printf("the string 1 is  %s\n",string1);
	mystrcpy(string1,string2,mystrlen(string1));
	printf("the string 2 is  %s.",string2);
	
}
