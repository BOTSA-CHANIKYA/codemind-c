#include<stdio.h>
int main()
{
    int a,b,i,c=0,d=0,e,f;
    scanf("%d",&a);
    b=a*a;
    e=a;
    while(a!=0)
    {
        i=a%10;
        c=c*10+i;
        a=a/10;
    }
    int s=c*c;
    while(s!=0)
    {
     f=s%10;
     d=d*10+f;
     s=s/10;
    }
    if(d==b)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}