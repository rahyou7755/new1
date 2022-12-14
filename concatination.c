/*#include<stdio.h>
#include<string.h>
int main()
{
char a[30],b[30],i,j=0;
printf("enter the string:");
scanf("%28[^\n]s",a);
printf("enter the second string:");
scanf(" %28[^\n]s",b);
int len = strlen(a);
int len1=strlen(b);
for(i=len;j<len1;i++)
{
a[i]=b[j];
j++;
}
b[j]='\0';
printf("%s",a);
}*/
#include<stdio.h>
#include<string.h>
int main()
{
int i;
char a[]="mohd ",b[]="yousuf";
char *p,*p1;
p=a;
p1=b;
int len=strlen(a);
int len1=strlen(b);
for(i=0;i<len;i++)
{
p++;
}
for(i=0;i<len1;i++)
{
*p=*p1;
p++;
p1++;
}
*p='\0';
printf("%s",a);
}
