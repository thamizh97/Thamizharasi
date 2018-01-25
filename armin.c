#include<stdio.h>
int main()
{
int arr[100], minimum,size,c, location=1;
printf("enter the no of elements in an array: ");
scanf("%d", &size);
printf("enter %d integer\n",size);
for(c=0;c<size;c++)
scanf("%d", &array[size]);
minimum=array[0];
for(c=1;c<size;i++)
{
if(array[c]< minimum)
minimum=array[c];
location=c+1;
}
}
printf("minimum element is present in location %d and its value is %d.\n", location,minimum);
return 0;
}
