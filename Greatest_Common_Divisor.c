#include<stdio.h>
int main()
{
    int a,i,b,c;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b && i<=a;i++)
    {
        if(a%i==0&& b%i==0)
        {
            c=i;
        }
    }
    printf("%d",c);
}