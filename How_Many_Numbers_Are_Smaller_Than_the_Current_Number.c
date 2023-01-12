#include<stdio.h>
int main()
{
    int a,i,j,c=0;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++)
    {
        c=0;
        for(j=0;j<a;j++)
        {
        if(n[i]>n[j])
        {
            c++;
        }
        }
        printf("%d ",c);
    }
}