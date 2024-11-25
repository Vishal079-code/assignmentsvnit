//program to find the length of the strings including space or excluding space using pointers
#include<stdio.h>
 int mystrlen(char* x,int y){
 	int i=1,count=0,spaces=0,b=*x;
 	while(b!='\0'){
 		count++;
 		if(b ==' '){
 			spaces++;
		 }
		 b=*(x+i);
		 i++;
	 }
	 if(y==0)
	 return count;
	 if (y==1)
	return (count-spaces);
 	
 }
 int main()
 {  int strlen1,strlen2;
 	char inputstring[100];
 	printf("please input a string:");
 	fgets(inputstring, 100 , stdin);
 	
    strlen1=mystrlen((char*)inputstring,0);
    strlen2=mystrlen((char*)inputstring,1);
	printf("the value string length including spaces : %d",strlen1);
	printf("\nthe value string length excluding spaces  :%d ",strlen2);  
 	return 0;
 }
