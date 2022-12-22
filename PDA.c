#include<stdio.h>
int main()
{
    int a,b,i,c=0,d;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
        c=c+i;
        }
    }
    if(a==c)
    {
        printf("PERFECT");
    }
    else if(c>a)
    {
        printf("ABUNDANT");
    }
    else if(c<a)
    {
        printf("DEFICIENT");
    }
}