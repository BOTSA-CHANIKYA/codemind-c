#include<stdio.h>
int main()
{
    int i,c;
    int n[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<3;i++)
    {
        c=(2*n[0]*n[1]*n[2]*512)/1024;
    }
    printf("%dKB",c);
}