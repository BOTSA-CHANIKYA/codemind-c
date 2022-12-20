#include<stdio.h>
int main()
{
    int a,b,d;
    scanf("%d%d",&a,&b);
    int c=21;
    if((a+b)>10)
    {
       d=c-(a+b);
       printf("%d",d);
    }
    else
    {
        printf("-1");
    }
}