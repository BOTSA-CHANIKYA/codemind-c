#include<stdio.h>
int main()
{
    int a;
    float b,sc,c;
    scanf("%d",&a);
    if(a<200)
    {
        b=a*1.20;
    }
    else if(a>200&&a<400)
    {
        b=a*1.50;
    }
    else if(a>400&&a<600)
    {
        b=a*1.80;
    }
    else if(a>600)
    {
        b=a*2.00;
    }
    if(a>400)
    {
        sc=b*0.15;
    }
    else
    {
        sc=100;
    }
    c=b+sc;
    printf("%.2f",c);
}