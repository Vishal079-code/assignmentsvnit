#include <stdio.h>
int main()
{
	char a;
	printf("please enter the letter or chracter  = ");
	scanf("%c",&a);
	(a>96)? printf("the given character is a small case letter") :printf("the given character is not a small  case letter");
	return 0;
}
