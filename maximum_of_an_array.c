#include<stdio.h>
int main()
{
    int a,max,i;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<=a;i++)
    {
        scanf("%d",&n[i]);
        max=n[0];
    }
    for(i=0;i<a;i++)
    {
    if(n[i]>max)
    {
        max=n[i];
    }
    }
    printf("%d",max);
}