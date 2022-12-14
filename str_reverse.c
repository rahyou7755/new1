/*#include<stdio.h>
#include<string.h>
int main()
{
char a[30];
printf("enter the string");
scanf("%28[^\n]s",a);
int len=strlen(a);
int i;
for(i=len;i>=0;i--)
{
printf("%c",a[i]);
}
}*/
/*#include<stdio.h>
#include<string.h>
int main()
{
char a[30];
printf("enter the string");
scanf("%28[^\n]s",a);
int len=strlen(a);
int temp;
for(int i=0;i<len/2;i++)
{
temp=a[i];
a[i]=a[len-i-1];
a[len-i-1]=temp;
}
printf("%s",a);
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
char a[]="this the next level of you";
char *p=a;
int len=strlen(a);
int i;
for(i=0;i<len;i++)
{
p++;
}
p--;
for(i=0;i<len;i++)
{
printf("%c",*p);
p--;
}
}*/

/*#include<stdio.h>
#include<string.h>
int main()
{
char a[]="this the way";
int len,i;
char *p=a;
char *p1=a;
char temp;
len=strlen(a);
for(i=0;i<len;i++)
{
p++;
}
p--;
for(i=0;i<len/2;i++)
{
temp=*p1;
 *p1=*p;
 *p=temp;
 p1++;
 p--;
 }
 printf("%s",a);
 }*/

#include<stdio.h>
#include<string.h>
char *fun(char *p);
int main()
{
	char a[]="this the way";
	char *p1=fun(a);
	printf("%s",p1);
}
char *fun(char *p)
{
	static char a[100];
	static int i=0;
	if(*p!='\0')
	{
		fun(p+1);
		a[i++]=*p;
	}
	return a;
}




