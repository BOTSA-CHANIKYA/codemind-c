#include<stdio.h>
int main()
{
    int ti,i;
    scanf("%d",&ti);
    for(i=1;i<=ti;i++)
    {
        int a,s,j,c=0,d;
        scanf("%d",&a);
        d=a;
        while(a>0)
        {
         s=a%10;
         c=c*10+s;
         a=a/10;
        }
        if(c==d)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}