#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=b*c;
    if(d>=a)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}