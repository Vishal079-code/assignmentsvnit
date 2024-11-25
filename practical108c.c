//program to append string1   to another  string2
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
void   mystrcat(char*x,char*y,int size1,int size2)
{
  	int i,j;
  	*(x+size1)=' ';
  	for(i=size1,j=0;j<size2;i++,j++)
  	{
  		*(x+i+1)=*(y+j);
	  }
	  
}
int main(){
	char string1[50];
	printf("enter the string 1:");
	fgets(string1,50,stdin);
	char string2[50];
	printf("enter the string 2:");
	fgets(string2,50,stdin);
	my_new_line_char_remove(string1,mystrlen(string1));
	my_new_line_char_remove(string2,mystrlen(string2));
	printf("string 2 is appended in string 1\n");
	mystrcat(string1,string2,mystrlen(string1),mystrlen(string2));
	my_new_line_char_remove(string1,mystrlen(string1));
	printf("the string1 is %s",string1);
   	
	
	
}
