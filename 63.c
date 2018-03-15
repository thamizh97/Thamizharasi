#include<stdio.h>
#include<string.h>
int main()
{
  int i,count=1;
  char a[100];
  printf("enter the sentence");
  scanf("%[^\n]s",&a[i]);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]==' ')
    {
      count++;
    }
  }
  printf("the no of string %d is: ",count);
  return 0;
}
