#include<stdio.h>
int main()
{
int a[30],i,larg,smal,n;
printf("enter the elements you want to initialize:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
larg=a[0];
smal=a[0];
for(i=0;i<n;i++)
{
if(a[i]>larg)
larg=a[i];
else if(a[i]<smal)
smal=a[i];
}
printf("%d is large number\n %d is smaller number",larg,smal);
}

