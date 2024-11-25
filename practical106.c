//creating a item structure
#include<stdio.h>
struct item{
char	item_name[50];
int quantity;
int price;
int amount;	
};
int main(){
	int n,i;
	printf("enter the number of items:");
	scanf("%d",&n);
	getchar();
	struct item items[n];
	for(i=0;i<n;i++){
		printf("enter item name:");
		fgets(items[i].item_name,50,stdin);
		printf("enter quantity:");
		scanf("%d",&items[i].quantity);
		printf("enter price :");
		scanf("%d",&items[i].price);
		getchar();
	}
	for(i=0;i<n;i++){
				printf("item name:%s",items[i].item_name);
				printf("quantity:%d\n",items[i].quantity);
				printf("price: %d\n",items[i].price);
				printf("amount :%d\n",items[i].price*items[i].quantity);

	}
}
