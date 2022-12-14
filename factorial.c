#include<stdio.h>
unsigned  fun(int a)
{
if(a==0)
return 1;
return a*fun(a-1);
}
int main()
{
unsigned a=5;
 printf("%d is the factorial",fun(a));
}
