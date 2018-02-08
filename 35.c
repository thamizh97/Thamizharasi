#include<stdio.h>
int main()
{
  char str[100];
  int countNumeric,countDigit;
  int counter;
count Digits=countNumeric=0;
printf("enter the string: ");
gets(str);
for(counter=0;counter!=NULL;counter++)
{
if(str[counter]>='0' && str[counter]<='9')
countNumeric++;
}
printf("\n Numeric:%d",countNumeric);
return 0;
}

