//sorting the strings by using pointers
#include<stdio.h>
#include<string.h>
int main(){
	int i,n,j;
	printf("please enter number of strings :");
	scanf("%d",&n);
	getchar();
	char str[n][50];
	char (*ptr) [50] = str;
	char swap[50];
	for(i=0;i<n;i++){
		printf("enter the string %d :",i+1);
		fgets(str[i],50,stdin);
		
	}
	char*x=NULL;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
		
		
		if((strcmp(str[i],str[j]))>0){
		
			strcpy(swap,ptr[i]);
			strcpy(ptr[i],ptr[j]);
		strcpy(ptr[j],swap);
	//	x=ptr[i];
	//	ptr[i]=ptr[j];
	//	ptr[j]=x;
			
				
	}
}
	}
		for(i=0;i<n;i++){
		printf("enter the string %s :",str[i]);
		
	}
	return 0;	
}
