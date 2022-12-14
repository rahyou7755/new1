#include<stdio.h>
#include<string.h>
int main()
{
char a[]="yousuf";
char *p=a;
int i,c=0;
int len=strlen(a);
for(i=0;i<len;i++)
{
p++;
c++;
}
p--;
for(i=0;i<len;i++)
{
a[i]=*p;
p--;
}
printf("%s",p);
}
