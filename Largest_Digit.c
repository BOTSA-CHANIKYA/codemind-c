#include<stdio.h>
int main()
{
    int a,i,b,c=0;
    scanf("%d",&a);
    b=a;
    while(a!=0)
    {
        i=a%10;
        if(c<i)
        {
            c=i;
        }
        a=a/10;
    }
    printf("%d",c);
}