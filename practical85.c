//writing a function to read the character and tell that the character is vowel or not
#include<stdio.h>
int vowel(char n){
	if(n=='a'||n=='u'||n=='o'||n=='i'||n=='e')
	return 1;
	 else if(n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
	 return 0;
	 else
	 return 2;
}
int main(){
	char n;
	printf("please enter the character:");
	scanf("%c",&n);
	int a=vowel(n);
	if(a==1)
		printf("the given character is the lower case vowel");
	else if(a==0)
	printf("the given character is the UPPER case vowel.");
	else
	printf("sorry the given character is not a vowel");
	return 0;
}
