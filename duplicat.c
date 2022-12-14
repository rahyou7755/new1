#include<stdio.h>
int main()
{
int a[30],b[30]={0},i,n;
printf("enter the elements you want to enter\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);//1 2 1 3 2
}
for(i=0;i<n;i++)
{
b[a[i]]++;//b[1]=1,2,2,3,3
if(b[a[i]]==1)
{
printf("%d",a[i]);//2,3,
}
}
}

