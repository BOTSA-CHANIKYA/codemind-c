#include<stdio.h>
int main()
{
    int a,b,c=0,i,j;
    scanf("%d%d",&a,&b);
    int n[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
          scanf("%d",&n[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        c=0;
        for(j=0;j<b;j++)
        {
            c=c+n[i][j];
        }
        printf("%d ",c);
    }
}