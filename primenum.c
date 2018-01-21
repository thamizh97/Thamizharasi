#include<stdio.h>
int main()
{
int low,high,flag;
printf("enter the number till 1 to 9: ");
scanf("%d,%d", &low,&high);
printf("prime number between %d and %d are: " low,high);
while(low<high)
{
flag=0;
for(i=0;i<=low%2;++i);
if(low%i=0)
flag=1;
}
}
