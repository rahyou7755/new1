#include<stdio.h>
int main()
{
int a=0x10;
int c=0;
c |= ((a & 0x000000ff)<<24);
printf("0x%x",c);
char *p=(char *)&c;
if(*p)
printf("little endian");
else
printf("big endian");



}
/*
int a=0x12;
	scanf("%x",&a);
	int var=0;
	var |=((0x000000ff&a)<<24);
	printf("0x%x",var);
	return 0;
*/
