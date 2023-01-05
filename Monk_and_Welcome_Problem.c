#include<stdio.h>
int main()
{
    int a,i,j,c,b,d;
    scanf("%d",&a);
    int n[a],m[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(j=0;j<a;j++)
    {
        scanf("%d",&m[j]);
    }
    for(i=0;i<a;i++)
    {
         b=n[i];
         c=b+m[i];
         printf("%d ",c);
    }
}