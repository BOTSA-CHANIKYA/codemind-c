#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(b>c)
        {
            d=a+b;
            printf("%d",d);
        }
        else if(c>a)
        {
            d=c+a;
            printf("%d",d);
        }
    }
    else if(b>a)
    {
        if(a>c)
        {
            d=b+a;
            printf("%d",d);
        }
        else if(c>b)
        {
            d=b+c;
            printf("%d",d);
        }
    }
}