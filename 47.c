#include<stdio.h>
int main()
{
int a[50],i,j,n,t;
printf("enter the value");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
  for(j=0;j<i;j++)
  {
if(a[i]>a[j])
{
  t=a[i];
  a[i]=a[j];
  a[j]=t;
}
}
}
printf("%d%d\t",a[0],a[n-1]);
return 0;
}
