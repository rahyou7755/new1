#include<stdio.h>
int main()
{
int a[]={1,2,3,1,2};
int i,j;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
if(a[i]==a[j] && i!=j)
break;
}
if(j==5)
{
printf("%d",a[i]);
}
}
}
