#include<stdio.h>
void sum(int a,int b)
{
    float c;
    c=(a+b)/2.0;
    printf("Average of %d and %d is: %.2f",a,b,c);
}
int main()
{
    int a,b;
    float c;
    scanf("%d%d",&a,&b);
    sum(a,b);
}

