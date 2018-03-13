#include<stdio.h>
int main(void)
{
  int a,i;
  printf("enter the string");
  scanf("%d",&a);
  
  if((a%10==0)||(a%10==1))
    printf("yes");
 else
  printf("no");
  return 0;
}
