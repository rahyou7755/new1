#include<stdio.h>
int main()
{
int a,rem=0,rev=0;
printf("enter the number\n");
scanf("%d",&a);
int temp=a;
while(temp!=0)
{
rem=temp%10;
rev=rev*10+rem;
temp=temp/10;
}
if(a==rev)
{
printf("%d %d is palindrom",a,rev);
}
else
{
printf("not a palindrom");
}
}

