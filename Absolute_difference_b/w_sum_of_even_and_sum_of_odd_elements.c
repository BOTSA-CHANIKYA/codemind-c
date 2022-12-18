#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,s=0,d=0;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++)
    {
        if(n[i]%2==0)
        {
            s=s+n[i];
        }
    }
    for(i=0;i<a;i++)
    {
        if(n[i]%2!=0)
        {
            d=d+n[i];
        }
    }
    printf("%d",abs(d-s));
}
