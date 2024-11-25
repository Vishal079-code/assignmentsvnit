//adding details of n students about student nam , roll no,total marks
#include<stdio.h>
#include<string.h>
struct student{
	int rollno;
	int totalmarks;
	char name[50];
};
int main(){
	
	 FILE* ptr= fopen("lmniitstudent.java","w");
	printf("enter the number of students :");
	int n;
	scanf("%d",&n);
	getchar();
	int i;
//	char stname[50];
	struct student students[n];
	for(i=0;i<n;i++){
		fprintf("%d. ",i+1);
		printf("enter the student name :");
		fgets(students[i].name,50,stdin);
		students[i].name[strcspn(students[i].name, "\n")] = 0;
		fprintf(ptr,"student name:%s",students[i].name);
		
		printf("enter roll no:");
		scanf("%d",&students[i].rollno);
		fprintf(ptr,"\nroll no:%d\n",students[i].rollno);
	
		printf("enter total marks:");
       scanf("%d",&students[i].totalmarks);
	   getchar();  	
	   fprintf(ptr,"total marks:%d\n",students[i].rollno);
	}
	
	fclose(ptr);
	
	
	
	
}
