/*#include<stdio.h>
#include<string.h>
int main()
{
char a[30]="mohd yousuf",b[30];
int len=strlen(a);
int i,j=0;
for(i=0;i<len;i++)
{
b[i]=a[i];
}
b[i]='\0';
printf("%s",b);
}*/
#ifdef flag
#include<stdio.h>
#include<string.h>
int main()
{
int i;
char a[]="mohd yousuf",b[30];
char *p=a,*p1=b;
int len=strlen(a);
for(i=0;i<len;i++)
{
*p1=*p;
p1++;
p++;
}
*p1='\0';
printf("%s",b);
}
#endif
