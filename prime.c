#include<stdio.h>
int main()
{
int a,c=0;
printf("enter the number\n");
scanf("%d",&a);
for(int i=1;i<=a;i++)
{
if(a%i==0)
{
c++;
}
}
if(c==2)
{
printf("%d is prime number",a);
}
else
{
printf("not a prime number");
}
}

