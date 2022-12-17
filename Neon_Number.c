#include<stdio.h>
int main()
{
    int a,c=0,b,d,f;
    scanf("%d",&a);
    f=a;
    b=a*a;
    while(b!=0)
    {
        d=b%10;
        c=c+d;
        b=b/10;
    }
    if(c==f)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}