#include<stdio.h>
int main()
{
    int a,b,c=0,d=0,j,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        c=0;
        if(a%i==0)
        {
            b=i;
        for(j=1;j<=a;j++)
        {
        if(b%j==0)
        {
            c++;
        }
        }
        if(c!=2)
        {
            d++;
        }
    }
    }
    printf("%d",d);
    
}