#include <stdio.h>
int main()
{
  int num,n,m;
  printf("enter the number");
  scanf("%d",&num);
  printf("enter the range(m,n): ");
  scanf("%d%d",&n,&m);
  if((num<=n) // (num>=m))
  {
    printf("yes");
  }
  else
  {
    printf("no");
  }
}
