//writing a program to find the number of vowel in the string
#include<stdio.h>
int vowels(char*x){
	int i=0,vowel=0;
	char ch;
	while(*(x+i)!='\0')
	{
		ch=*(x+i);
		if (ch=='a'||ch=='u'||ch=='o'||ch=='e'||ch=='i'){
		
		vowel++;
	}
		i++;
		
	}
	return vowel;
}
int main(){
	printf("input a string:");
	char string[1000];
	fgets(string,1000,stdin);
	printf("the no. of vowels is %d ",vowels(string));
	return 0;
}

