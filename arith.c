#include<stdio.h>
void main()
{
int term, difference,ap;
printf("enter thenumber of terms: ");
scanf("%d" ,&terms);
printf("enter the comman difference of arithmatic progression");
scanf("%d" ,&difference);
printf("arithmatic progression from 1 to %d with term different");
for(i=0;i<=terms;i++)
{
ap=1+(i-1)*difference;
printf("%d" ,ap);
}
return 0;
}
