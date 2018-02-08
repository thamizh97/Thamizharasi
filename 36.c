#include<stdio.h>
int main()
{
  char str[100];
  int countSpecialcharacter,countDigit;
  int counter;
count Digits=countSpecialcharacter=0;
printf("enter the string: ");
gets(str);
for(counter=0;counter!=NULL;counter++)
{
if(str[counter]>='0' && str[counter]<='9')
countSpecialcharacter++;
}
printf("\n Specialcharacter:%d",countSpecialcharacter);
return 0;
}

