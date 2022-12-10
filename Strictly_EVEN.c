#include<stdio.h>
int main()
{
    int a,s,i,c;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++)
    {
        if(n[i]%2==0)
        {
            if(i%2==0)
            {
                c=0;
            }
            else
            {
                c=1;
                break;
            }
        }
    }
        if(c==0)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
}