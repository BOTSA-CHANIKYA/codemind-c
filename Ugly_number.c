#include<stdio.h>
#include<string.h>
int main()
{
    int a,b=0;
    scanf("%d",&a);
    while(a!=1)
    if(a%2==0)
    {
        a=a/2;
    }
    else if(a%3==0)
    {
    a=a/3;
    }
    else if(a%5==0)
    {
        a=a/5;
    }
    else
    {
        printf("Not Ugly Number");
        b=1;
        break;
    }
if(b==0)
{
    printf("Ugly Number");
}
}