#include<stdio.h>
#include<string.h>
int main()
{
char a[30],b[30],i,j=0;
printf("enter the string");
scanf("%28[^\n]s",a);
int len=strlen(a);
for(i=0;i<len;i++)
{
if(!(a[i]==' ' && a[i+1]==' '))
{
b[j]=a[i];
j++;
}
else
{
;
}
}
b[j]='\0';
printf("%s",b);
}

