#include<stdio.h>
void area(int b,int h)
{
    int a;
    a=0.5*b*h;
    printf("%d",a);
}
int main()
{
    int a,b,h;
    scanf("%d%d",&b,&h);
    area(b,h);
}