
#include<stdio.h>
int main()
{
  int i,n,a=0,b=1,c;
  printf("enter the number of terms");
  scanf("%d",&n);
  printf("fibonacci series: ");
  for(i=1;i<=n;++i)
  { 
    printf("%d",c);
    c=a+b;
    a=b;
    b=a;
  }
  return 0;
}
