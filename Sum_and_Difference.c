#include<stdio.h>
int main()
{
    int a,b,g,f;
    float c,d;
    scanf("%d%d%f%f",&a,&b,&c,&d);
    g=a+b;
    f=a-b;
    float s=c+d;
    float z=c-d;
    printf("%d %d
%.1f %.1f",g,f,s,z);
}