#include<stdio.h>
int main()
{
    int a,s,d=0,i;
    scanf("%d",&a);
    s=a;
    while(a>0)
    {
      i=a%10;
      d=d*10+i;
      a=a/10;
    }
    if(s!=0)
    {
        printf("%d",d);
    }
}