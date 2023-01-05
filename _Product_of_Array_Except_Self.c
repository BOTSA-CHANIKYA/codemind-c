#include<stdio.h>
int main()
{
    int a,i,d=1,j;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++)
    {
        d=1;
        for(j=0;j<a;j++)
        {
            if(n[i]!=n[j])
            {
                d=d*n[j];
            }
        }
            printf("%d ",d);
    }
}