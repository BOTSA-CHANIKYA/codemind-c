#include<stdio.h>
int main()
{
    int a,i,c;
    scanf("%d",&a);
    for(i=1;i<=12;i++)
    {
        c=a*i;
        printf("%d x %d = %d
",a,i,c);
    }
}