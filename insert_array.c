#include<stdio.h>
int main()
{
int a[30],i,loc,ele,n;
printf("enter the size of the array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the location:");
scanf("%d",&loc);
printf("enter the element:");
scanf("%d",&ele);
for(i=n-1;i>=loc;i--)
{
a[i+1]=a[i];
}
a[loc]=ele;
for(i=0;i<=n;i++)
{
printf("%d",a[i]);
}
}
