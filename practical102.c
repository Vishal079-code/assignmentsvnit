//read the text file and find the number of words ,lines and characters

#include<stdio.h>
int main(){
	char string1[100];
	int characters=0,lines=0,words=0;
	char ch;
	FILE *f_ptr=fopen("file1.txt","r");
	while(((ch=fgetc(f_ptr))!=EOF)){
		characters++;
		if(ch=='\n')
		lines++;
		if(ch==' ')	
		words++;		
	}
	words++;
	if(lines==0)
		lines++;
	else
		words++;
	

	fclose(f_ptr);
	printf("\nthe number of characters  in the file including spaces is %d",characters);
	printf("\nthe number of words  in the file is %d",words);
	printf("\nthe number of lines  in the file is %d",lines);
	printf("\nthe number of characters  in the file excluding spaces is %d",characters-words-1);
	
	
	
}
