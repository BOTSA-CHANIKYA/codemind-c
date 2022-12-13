#include<stdio.h>
int main()
{
    int a,i,s;
    scanf("%d",&a);
    s=1;
    for(i=a;i>=1;i--)
    {
        s=s*i;
    }
     printf("%d ",s);
}