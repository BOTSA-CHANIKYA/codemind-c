#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
     long long int n[a],c=0;
    for(i=0;i<a;i++)
    {
        scanf("%lld",&n[i]);
    }
    for(i=0;i<a;i++)
    {
        c=c+n[i];
    }
    printf("%lld",c);
}