#include<stdio.h>
int main()
{
    int a,i,j=1,r;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    r=n[0];
    while(j<a)
    {
        if(n[j]%r==0)
        {
            j++;
        }
        else
        {
            r=n[j]%r;
            i++;
        }
    }
    printf("%d",r);
}