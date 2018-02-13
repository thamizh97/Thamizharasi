
#include<stdio.h>

int main()
{
	int count,n=15;
	char name[50];
  printf("Enter the name: ");
	scanf("%s",name);
	count=1;
	printf("%s, ",name);
	count++;
	start:
	if(count<=n)
	goto start;
	return 0;
}
