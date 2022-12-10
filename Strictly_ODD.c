#include<stdio.h>
int main()
{
    int a,s,i;
    scanf("%d",&a);
    int n[i];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++)
    {
        if(n[i]%2!=0)
        {
            if(i%2!=0)
            {
                s=1;
            }
            else
            {
                s=2;
                break;
            }
        }
    }
    if(s==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}