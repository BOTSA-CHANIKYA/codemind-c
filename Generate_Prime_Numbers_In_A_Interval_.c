#include<stdio.h>
int main()
{
    int a,b,c,s=0,d,i,j;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        s=0;
        for(j=1;j<=b||j<=a;j++)
        {
        if(i%j==0)
        {
            s++;
        }
        }
    if(s==2)
    {
        printf("%d
",i);
    }
    }
}