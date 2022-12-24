#include<stdio.h>
int main()
{
    int a,i,d=0,e,s;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
        e=n[0];
    }
    int b,c;
    scanf("%d%d",&b,&c);
    for(i=0;i<a;i++)
    {
        if(n[i]<b||n[i]>c)
        {
            if(e<n[i])
            {
                e=n[i];
                s=0;
            }
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
        else if(s==0)
        {
            printf("%d",e);
        }
}
