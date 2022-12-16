#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    if(a%9==0)
    {
        printf("True");
    }
    else if(a%9!=0)
    {
        printf("False");
    }
}