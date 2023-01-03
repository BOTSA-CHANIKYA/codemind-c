#include<stdio.h>
int main()
{
    int a,b,c,s=0,d,i,j;
    scanf("%d%d",&a,&b);
    c=a+b;
    for(i=1;i<=c;i++)
    {
        d=c+i;
        s=0;
        for(j=1;j<=d;j++)
        {
        if(d%j==0)
        {
            s++;
        }
        }
    if(s==2)
    {
        printf("%d ",i);
        break;
    }
    
    }
}