#include<stdio.h>
int main()
{
    int a,i;
    float s,sum=0;
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
    s=sum/a;
    printf("%.2f",s);
}