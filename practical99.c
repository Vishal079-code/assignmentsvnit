//reading the data from file and finding the no of vowels in all the files
#include<stdio.h>
int main(){
	char string1[100];
	int vowels=0;
	char ch;
	FILE *f_ptr=fopen("file1.txt","r");
	while(((ch=fgetc(f_ptr))!=EOF)){
		if(ch=='a'||ch=='u'||ch=='o'||ch=='i'||ch=='e')
		vowels++;		
	}
	fseek(f_ptr, 0, SEEK_SET);
	fgets(string1,100,f_ptr);
	printf("the file context is :\n%s\n",string1);
	fclose(f_ptr);
	printf("the number of vowels in the file is %d",vowels);
}
