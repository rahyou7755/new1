#include<stdio.h>
int main()
{
int a[]={1,2,3,4,5};
int i,tem;
int len=5;
for(i=0;i<len/2;i++)
{
tem=a[i];
a[i]=a[len-i-1];
a[len-i-1]=tem;
}
for(i=0;i<len;i++)
{
printf("%d\t",a[i]);
}
}
