#include<stdio.h>
int main()
{
    int a,i,b,e,s,c=0,d=1;
    scanf("%d",&a);
    b=a;
    while(a!=0)
    {
        e=a%10;
        d=d*e;
        c=c+e;
        a=a/10;
    }
    s=d-c;
    printf("%d",s);
}