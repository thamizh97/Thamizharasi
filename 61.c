#include<stdio.h>
int main(void)
{
  int i,n,k;
  char a[10];
  printf("enter the string");
  scanf("%s",a);
  printf("enter the value of k: ");
  scanf("%d",&k);
  for(i=0;i<k;i++)
  {
    printf("%c",a[i]);
  }
  return 0;
}
