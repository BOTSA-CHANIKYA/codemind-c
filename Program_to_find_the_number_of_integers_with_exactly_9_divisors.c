#include<stdio.h>
int main()
{
    int a,b,c=0,d=0,j,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        c=0;
        for(j=1;j<=a;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==9)
        {
            d++;
            printf("%d ",i);
        }
    }
        printf("
");
    printf("Total=%d",d);
    
}