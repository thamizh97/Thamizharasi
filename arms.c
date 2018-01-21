#include<stdio.h>
int main()
{
int number,sum=0,rem=0,tempnumber;
printf("enter an integer: ", number);
scanf("%d", number);
tempnumber=number;
while(tempnumber!=0)
 {
 rem=tempnumber%10;
 sum=sum+(rem*rem*rem);
 tempnumber/=10;
 }
 if(sum==number)
 printf("%d is armstromg number", number);
 else
 printf("%d is not an armstrong number", number);
 }
