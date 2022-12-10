#include<stdio.h>
int main()
{
    int a,sum=0,i;
    scanf("%d",&a);
    int n[i];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++)
    {
        if(i%2!=0)
        {
            sum=sum+n[i];
        }
    }
    printf("%d",sum);
}