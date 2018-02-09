#include<stdio.h>
int main()
{
int i;
int a[10];
int greatest;
printf("enter ten numbers");
scanf("%d",&i);
for(i=0;i<10;i++);
{
  scanf("%d",&a[i]);
}
greatest=a[0];
for(i=0;i<10;i++)
{
if(a[i]<greatest)
{
  greatest=a[i];
}
}
printf("\ngreatest of ten number is %d",greatest);
return 0;
}
