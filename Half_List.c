#include<stdio.h>
int main()
{
    int a,i,b;
    scanf("%d",&a);
    int n[a];
    b=(a/2);
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=a-1;i>=b;i--)
    {
        printf("%d ",n[i]);
    }
    for(i=0;i<b;i++)
    {
        printf("%d ",n[i]);
    }
}