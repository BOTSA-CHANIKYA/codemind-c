#include<stdio.h>
int main()
{
    int a,i,j,c;
    scanf("%d",&a);
    for(i=a;i>0;i--)
    {
        for(j=a;j>0;j--)
        {
            printf("%d ",j);
        }
        printf("
");
    }
   
}