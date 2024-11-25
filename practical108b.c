//program to compare string1  with another string
#include<stdio.h>
int mystrlen(char string[50]){
	int i=0,count=0;
	while(string[i]!='\0'){
		count++;
		i++;
	}
	return count;
}
int  mystrcmp(char*x,char*y,int size)
{
  	int i,value=0;
  	for(i=0;i<size;i++)
  	{
  	if(*(x+i)!=*(y+i)){
  		value=*(x+i) -*(y+i);
  		break;
	  }
	  }
	  return value;
}
int main(){
	char string1[50];
	printf("enter the string 1:");
	fgets(string1,50,stdin);
	int i,j;
	char string2[50];
	printf("enter the string 2:");
	fgets(string2,50,stdin);
	printf("string 1 is compared in string 2\n");
	int value;
	for(i=0,j=0;i<mystrlen(string1),j<mystrlen(string2);i++,j++){
		if(string1[i]=='\n'){
			string1[i]='\0';
		}
			if(string2[j]=='\n'){
			string2[j]='\0';
		}
	
	}
   value=mystrcmp(string1,string2,mystrlen(string1));
   if(value==0){
   	printf("the value of strcmp is 0 means both the strigs are same  ");
   	
   }
   else
   {
   	printf("the value of the strcmp is %d which means the strings are not equal :",value);
   	
   }
	
	
	
}
