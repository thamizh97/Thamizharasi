#include <stdio.h>
int main()
{
int a,b,c;
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
c=a*b;
printf("the product of a and b is: ",c);
if(c%2==0)
{
  printf("even number");
}
else
{
  printf("odd number");
}
}
