#include<stdio.h>
int main()
{
int c=0;
int a=0x11223344;
c |= (0x000000ff & a)<<24;
c |= (0x0000ff00 & a)<<8;
c |= (0x00ff0000 & a)>>8;
c |= (0xff000000 & a)>>24;
printf("0x%x",c);
}

