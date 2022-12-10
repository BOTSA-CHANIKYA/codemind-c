#include<stdio.h>
int main()
{
    int a,s,i,min;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    min=n[0];
    for(i=0;i<a;i++)
    {
        if(n[i]<min)
        {
            min=n[i];
        }
    }
    printf("%d",min);
}