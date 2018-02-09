#include<stdio.h>
int main()
{
int i=50;
int k=34;
printf("the value of i=%d k=%d before swapping",i,k);
i=i^k;
k=i^k;
i=i^k;
printf("the value of i=%d k=%d after swapping",i,k);
return 0;
}
