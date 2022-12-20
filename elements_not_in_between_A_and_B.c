#include<stdio.h>
int main()
{
    int a,i,d=0;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    int b,c;
    scanf("%d%d",&b,&c);
    for(i=0;i<a;i++)
    {
        if(n[i]<b||n[i]>c)
        {
            printf("%d ",n[i]);
        }
        else
        {
            d++;
        }
    }
        if(d==a)
        {
            printf("-1");
        }
}
