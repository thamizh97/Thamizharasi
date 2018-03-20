#include<stdio.h>
int main()
{
int j,i;
scanf("%d",&j);
for(i=j;;i++)
{
 if(i%10==0)
 {
 printf("%d",i);
 break;
 }
}
return 0;
}
