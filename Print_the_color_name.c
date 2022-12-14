#include<stdio.h>
int main()
{
     char v,i,b,g,y,o,r,n;
    scanf("%c",&n);
    if(n=='v')
    {
        printf("Violet");
    }
    else if(n=='i' || n=='I')
    {
        printf("Indigo");
    }
    else if(n=='b' || n=='B')
    {
        printf("Blue");
    }
    else if(n=='g' || n=='G')
    {
        printf("Green");
    }
     else if(n=='y' || n=='Y')
    {
        printf("Yellow");
    }
    else if(n=='o' || n=='O')
    {
        printf("Orange");
    }
    else if(n=='r' || n=='R')
    {
        printf("Red");
    }
    else
    {
        printf("-1");
    }
    
}