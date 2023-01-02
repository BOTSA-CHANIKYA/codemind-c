#include<stdio.h>
int main()
{
    int a=-1,b=1,i,c,d;
    scanf("%d",&c);
    for(i=1;i<=c;i++)
    {
        d=a+b;
        printf("%d ",d);
        a=b;
        b=d;
    }
}