#include<stdio.h>
int main()
{
unsigned int i=1;
char *p=(char *)&i;
if(*p)
printf("little endian:");
else
printf("big endian:");
}

