//structure of employee
#include<stdio.h>
  struct employee{
    int	member_employee_number;
    char name[50];
    int basic_pay;
};
 int display(struct employee* x)
 {
 printf("employee name :%s", x->name);
 	
 printf("basic pay :%d \n" , x->basic_pay);
 }
int main()
{
	struct employee employ[50];
	printf("enter the number of employ:");
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		printf("enter employee number:");
		scanf("%d",&employ[i].member_employee_number);
		getchar();
		printf("enter the employee name:");
		fgets(employ[i].name,50,stdin);
		
		printf("enter basic pay:");
		scanf("%d",&employ[i].basic_pay);	
	}
	struct employee*x=employ;
	
	for(i=0;i<n;i++){
		display(x+i);
	}
	
}
