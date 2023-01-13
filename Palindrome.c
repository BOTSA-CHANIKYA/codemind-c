#include<stdio.h>
int main()
{
    int a,s,d=0,f,g;
    scanf("%d",&a);
    s=a;
    while(a!=0)
    {
     f=a%10;
     d=d*10+f;
     a=a/10;
    }
    if(s==d)
    {
    printf("True");
    }
    else
    {
        printf("False");
    }
}