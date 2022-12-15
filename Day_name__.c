#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    if(a==1)
    {
        printf("monday ");
    }
    else if(a==2)
    {
        printf("tuesday");
    }
    else if(a==3)
    {
        printf("wednesday");
    }
     else if(a==4)
    {
        printf("thursday");
    }
    if(a==5)
    {
        printf("Friday");
    }
    else if(a==6)
    {
        printf("saturday");
    }
    else if(a==7)
    {
        printf("sunday");
    }
    else if(a>7)
    {
        printf("invalid input");
    }
}