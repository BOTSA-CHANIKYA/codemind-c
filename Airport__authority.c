#include<stdio.h>
int main()
{
    int a,i,c=0;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    int b;
    scanf("%d",&b);
    for(i=0;i<a;i++)
    {
        if(n[i]<=b)
        {
            c=c+1;
        }
        else
        {
            c=c+2;
        }
    }
    printf("%d",c);
}