#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i,d,v;
    scanf("%d%d%d",&a,&b,&c);
    for(i=b;i<=c;i++)
    {
        d=(a*i);
        printf("%d x %d = %d
",a,i,d);
    }
}