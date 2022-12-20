#include<stdio.h>
int main()
{
    int n,k,m,c;
    scanf("%d%d%d",&n,&k,&m);
    if(n>=(k*m))
    {
        if(n%(k*m)==0)
        {
            c=n/(k*m);
            printf("%d",c);
        }
        else if(n%(k*m)!=0)
        {
            c=(n/(k*m))+1;
            printf("%d",c);
        }
    }
    else
    {
        printf("1");
    }
}