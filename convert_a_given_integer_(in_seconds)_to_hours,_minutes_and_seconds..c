#include<stdio.h>
int main()
{
    int h,m,s;
    scanf("%d",&s);
    h=s/3600;
    int d=s%3600;
    m=d/60;
    int f=d%60;
   int g=f;
    printf("H:M:S-%d:%d:%d",h,m,g);
}