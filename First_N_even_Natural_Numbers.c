#include<stdio.h>
int main()
{
    int a,i,s;
    scanf("%d",&a);
    for(i=a;i>=1;i--)
    {
        s=i*2;
        printf("%d ",s);
    }
}