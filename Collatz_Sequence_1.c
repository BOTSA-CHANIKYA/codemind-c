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
            a=a/2;
        }
        else
        {
            printf("%d ",a);
            a=(3*a)+1;
        }
    }
    printf("1");
}