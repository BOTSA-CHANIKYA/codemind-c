#include<stdio.h>
int main()
{
    int a,b=0,i,c,d;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++)
    {
    b=b+n[i];
    }
    c=b/a;
    for(i=0;i<a;i++)
    {
    if(c==n[i])
    {
    d=0;
    break;
    }
    }
    if(d==0)
        printf("True");
    else
    printf("False");
}