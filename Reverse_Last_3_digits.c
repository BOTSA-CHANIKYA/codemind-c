#include<stdio.h>
int main()

{
    int a,b,c=0,d,e,s;
    scanf("%d",&a);
    b=a%1000;
    d=b;
    while(b!=0)
    {
        e=b%10;
        c=c*10+e;
        b=b/10;
    }
    s=(a-d)+c;
    printf("%d",s);
}