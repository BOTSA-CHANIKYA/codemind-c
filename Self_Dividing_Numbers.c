#include<stdio.h>
int main()
{
    int a,b,c,d,i,s=0,f=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        c=i;
        s=0;
        f=0;
        while(c!=0)
        {
            s++;
            d=c%10;
              c=c/10;
            if(d!=0&&i%d==0)
            {
                f++;
            }
        }
        if(f==s)  printf("%d ",i);
    }
}