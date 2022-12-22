#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    while(a!=0)
    {
        b=a%10;
        a=a/10;
        if(a%2==0&&b%2==0)
        {
           printf("Even");
           return 0;
        }
        else if(a%2!=0&&b%2!=0)
        {
            printf("Odd");
            return 0;
        }
        else    
        {
            printf("Mixed");
            return 0;
        }
    }
}