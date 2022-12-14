#include<stdio.h>
#include<string.h>
int main()
{
char a[]="hsaSDADfdsj";
int len=strlen(a);
for(int i=0;i<len;i++)
{
if((a[i]>='a' && a[i]<='z'))
{
a[i]=a[i]-32;
}
}
printf("%s",a);
}
