#include<stdio.h>
int main() {
  int a=2,b=5,result=0;
  while(b!=0)
  {
      if(b&1)
      result=result+a;
      a=a<<1;
      b=b>>1;
  }
  printf("%d",result);
}

