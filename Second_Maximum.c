#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int b,c,d;
        scanf("%d%d%d",&b,&c,&d);
        if(d>c&&d>b)
        {
            if(b>c)
            {
                printf("%d
",b);
            }
            else if(c>b)
            {
                printf("%d
",c);
            }
        }
        else if(b>c&&b>d)
        {
            if(d>c)
            {
                printf("%d
",d);
            }
            if(c>d)
            {
                printf("%d
",c);
            }
        }
        else if(c>b&&c>d)
        {
            if(d>b)
            {
                printf("%d
",d);
            }
            if(b>d)
            {
                printf("%d
",b);
            }
        }
    }
}