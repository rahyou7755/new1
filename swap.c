#include<stdio.h>
int main()
{
int a,b;
printf("enter the numbers");
scanf("%d%d",&a,&b);
printf("%d %d values before swapping\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("%d %d values after swapping\n",a,b);
}
