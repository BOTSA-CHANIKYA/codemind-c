#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c=0,i,d=0;
    scanf("%d",&a);
    for(i=1;i<=a+1;i++)
    {
        b=i;
        if(i%2==0)
        {
            printf("%d ",c);
            c=c+1;
        }
        else
        {
            printf("%d ",d);
            d=d+2;
        }
    }
}