#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int b,c;
        scanf("%d%d",&b,&c);
        if(b<c)
        {
            printf("PROFIT
");
        }
        else if(b>c)
        {
            printf("LOSS
");
        }
        else if(b==c)
        {
            printf("NEUTRAL
");
        }
    }
}