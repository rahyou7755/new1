#include<stdio.h>
  2 int main()
  3 {
  4         int a=10,i;
  5         for(i=7;i>=0;i--)
  6         {
  7                 if(a&(0x1<<i))
  8                 {
  9                         printf("1");
 10                 }
 11                 else
 12                 {
 13                         printf("0");
 14                 }
 15         }
 16         int c=0;
 17         c |= (a<<4);
 18         c |= (a>>4);
 19         printf("\n%d\n",c);
 20 }

