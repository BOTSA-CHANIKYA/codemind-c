#include<stdio.h>
int main()
{
    int d,i;
    scanf("%d",&d);
    for(i=1;i<=d;i++)
    {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a<=c&&c<b)
    {
        printf("YES
");
    }
    else
    {
        printf("NO
");
    }
    }
}