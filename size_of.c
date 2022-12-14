#include<stdio.h>
#define size_of(x) (char *)(&x+1)-(char *)(&x)
int main()
{
int a;
printf("%ld",size_of(a));
}
