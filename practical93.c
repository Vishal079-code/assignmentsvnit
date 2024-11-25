//program to   find the no. of words in a given string
#include<stdio.h>
   int twords(char* x)
   {
   	int i,spaces=0;
   	while(*(x+i)!='\0'){
   		if(*(x+i)==' ')
   		spaces++;
   		i++;
	   }
	   return ++spaces;
   }
   int main(){
   	int n;
   	char inputstring[10000];
   	
   	printf("please enter the string :");
   	fgets(inputstring,10000,stdin);
   	//int*x=&inputstring;
   	printf("the number of words in this input string is: %d.",twords(inputstring));

   	
   	
   }

