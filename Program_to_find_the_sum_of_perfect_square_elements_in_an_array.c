#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,b,d=0;
    float c;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++)
    {
        c=sqrt(n[i]);
        b=c;
        if(b==c)
        {
            d=d+n[i];
        }
    }
    printf("%d",d);
}