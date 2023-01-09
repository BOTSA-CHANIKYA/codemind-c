#include<stdio.h>
void aw(int x,int y,int z)
{
    int a;
    a=x*3-y-z;
    printf("%d",a);
}
int main()
{
    int x,y,z,a;
    scanf("%d%d%d",&x,&y,&z);
    aw(x,y,z);
}