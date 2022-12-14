#include<stdio.h>
#define fun(a,b)  (a^(0x1<<b))
int main()
{
int a,b;
printf("enter the number and position");
scanf("%d%d",&a,&b);
a=fun(a,b);
printf("%d",a);
}

