#include<stdio.h>
int main ()
{
int a[]={1,24,5,66,88,2,3};
int size,i,j,temp;
size=sizeof(a)/sizeof(a[0]);
for(i=0;i<size-1;i++)
{
for(j=0;j<size-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\n");
for(i=0;i<size;i++)
{
printf("%d\t",a[i]);
}
}
