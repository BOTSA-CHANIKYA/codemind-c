#include<stdio.h>
int main()
{
    int a,b,d=0,i;
    scanf("%d",&a);
    b=a;
   for(i=1;i<=a/2;i++)
    {
        if(a%i==0)
        {
            d=d+i;
        }
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