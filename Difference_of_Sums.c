#include<stdio.h>
int main()
{
    int a,b=0,c=0,n,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b=b+i*i;
    }
    for(i=0;i<=a;i++)
    {
        c=c+i;
    }
    n=c*c;
    int s=n-b;
    printf("%d",s);
}