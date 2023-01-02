#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int b,c=1,j;
        scanf("%d",&b);
        for(j=b;j>0;j--)
        {
            c=c*j;
        }
        printf("%d
",c);
    }
}