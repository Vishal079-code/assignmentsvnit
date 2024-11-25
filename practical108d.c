//program to  reverse string1  with another string
#include<stdio.h>
int mystrlen(char string[50]){
	int i=0,count=0;
	while(string[i]!='\0'){
		count++;
		i++;
	}
	return count;
}
void my_new_line_char_remove(char string[],int size){
	int i;
		for(i=0;i<size;i++){	
		if(string[i]=='\n')
		{
			string[i]='\0';
		}
			
}
}
void  myreverse(char*x,int size)
{
  	int i;
  	char array[size];
  	char*y=array;
  	for(i=0;i<size;i++)
  	{
  	 *(y+i)=*(x+size-i-1);
	  }
	  for(i=0;i<size;i++){
	  	*(x+i)=*(y+i);
	  }
	  
}
int main(){
	char string1[50];
	printf("enter the string 1:");
	fgets(string1,50,stdin);
	my_new_line_char_remove(string1,mystrlen(string1));
   printf("before reverse");
   printf(" \nstring 1 :%s",string1);
   myreverse(string1,mystrlen(string1));
   printf("\nafter reverse \n the string1 is  :%s",string1);	
}
