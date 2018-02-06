#include<stdio.h>
void main()
{
  int count=0,i;
  printf("enter the lines \n");
  scanf("%[^\n]w", w);
  for(i=0;i!="\0";i++)
  {
    if(i==' ')
    count++;
  }
  printf("number of words in the lines %d are: ", count+1);
}
