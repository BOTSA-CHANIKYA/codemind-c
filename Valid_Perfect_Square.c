#include<stdio.h>
#include<math.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int b,c;
        float d;
        scanf("%d",&b);
        d=sqrt(b);
        c=d;
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