#include<stdio.h>
#include<string.h>
char *fun(char *des,char *scr,unsigned int a);

int main()
{
char a[10]="yousuf";
char b[10];
//memcpy(b,a,sizeof(a)+1);
fun(b,a,6);
printf("%s",b);
}
char *fun(char *des,char *scr,unsigned int a)
{
char *new=des;
char *new1=scr;
for(int i=0;i<=a;i++)
{
*(new+i)=*(new1+i);
}
return new;
}
