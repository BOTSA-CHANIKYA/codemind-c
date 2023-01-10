#include<stdio.h>
int main()
{
    int d,y,w,s;
    scanf("%d",&d);
    y=d/365;
    s=d%365;
    w=s/7;
    printf("%d
%d",y,w);
}