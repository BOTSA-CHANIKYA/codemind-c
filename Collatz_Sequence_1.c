#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    while(a>1)
    {
        if(a%2==0)
        {
            printf("%d ",a);
            b=a/2;
        }
        else
        {
            printf("%d ",a);
            b=(3*a)+1;
        }
        a=b;
    }
    printf("1");
}