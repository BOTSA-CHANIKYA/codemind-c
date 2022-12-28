#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int b,c,d;
        scanf("%d%d",&b,&c);
        d=(b*c)/10;
        printf("%d
",d);
    }
}