#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int b;
        scanf("%d",&b);
        if(b<3)
        {
            printf("LIGHT
");
        }
        else if(b>=3&& b<7)
        {
            printf("MODERATE
");
        }
        else if(b>=7)
        {
            printf("HEAVY
");
        }
        
    }
}