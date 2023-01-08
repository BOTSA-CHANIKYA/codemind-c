#include<stdio.h>
int main()
{
    int a,i,c=0;
    int b,sum=0;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++)
    {
        sum=sum+n[i];
    }
    b=sum/a;
    for(i=0;i<a;i++)
    {
    if(n[i]<=b)
    c++;
    }
    printf("%d",c);
}