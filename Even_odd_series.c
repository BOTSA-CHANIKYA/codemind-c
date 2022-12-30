#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c=-1,d=1,i,s;
    scanf("%d",&a);
    for(i=0;i<=a;i++)
    {
        if(i%2!=0)
        {
            if(c==-1)
            {
                printf("0 ");
                c++;
            }
            else
            {
                 b=pow(3,c);
            printf("%d ",b);
            c++;
            }
        }
        else
        {
           s=pow(2,d);
           printf("%d ",s);
           d++;
        }
    }
}