#include<stdio.h>
#include<string.h>
int main()
{
char a[20],flag;
printf("enter the string");
scanf("%s",a);
int len=strlen(a);
for(int i=0;i<len;i++)
{
if(a[i]!=a[len-i-1])
{
flag=0;
break;
}
else
{
flag=1;
}
}
if(flag==1)
{
printf("%s is the palindrom",a);
}
else
{
printf("not a palindrom");
}
}




