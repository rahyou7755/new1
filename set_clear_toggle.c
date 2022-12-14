#include<stdio.h>
int main()
{
int a=14;
printf("%d\n",a|(0x1<<3));
printf("%d\n",a&(~0x1<<4));
printf("%d\n",a^(0x1<<7));
}
