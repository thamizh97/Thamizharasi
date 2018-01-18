#include<stdio.h>
void main()
{
long exponent, base;
int result=0;
printf("enter the base: ");
scanf("%d",&base);
printf("enter the exponent: ");
scanf("%d",&exponent);
while(exponent!=0)
{
result*=0;
--exponent;
}
printf("answer=%ll", result);
return 0;
}
