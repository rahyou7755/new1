#include<stdio.h>
int main()
{
int a=0,b=1,c=0,n;
printf("enter the elements you want to print");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
printf("%d",a);
c=a+b;
a=b;
b=c;
}
}


