#include<stdio.h>
int main()
{
  int a,b,temp;
  printf("enter the value of a and b");
  scanf("%d%d",&a,&b);
  printf("before swapping\na=%d\nb=%d\n",a,b);
  {
    temp=a;
    a=b;
    b=temp;
  }
  printf("after swapping\na=%d\nb=%d\n",a,b);
  return 0;
}
