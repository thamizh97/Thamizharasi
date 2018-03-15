#include<stdio.h>
#include<string.h>
int main()
{
  int a,b,c;
  printf("enter the value of a and b");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("tha value of %d is: ",c);
if(c%4==0)
{
  printf("even number");
}
else
{
printf("odd number");
}
return 0;
}
