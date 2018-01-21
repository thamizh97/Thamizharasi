#include<stdio.h>
int main()
{
int number, digit1, digit2, digit3;
printf("enter the number between 1 to 1000: ");
number=001;
while(number<=900)
{
digit1= number-((number/10)*10);
digit2=((number/ 10)-(number/100)*10);
digit3=((number/100)-(number/1000)*10);
temp=(digit+digit+digit)*(digit+digit+digit)*(digit+digit+digit);
if(temp==number)
{
printf("/n armstrong number is:%d", number);
}
number++;
}
}
