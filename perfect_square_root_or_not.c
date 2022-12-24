#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    float c;
    scanf("%d",&a);
    c=sqrt(a);
    b=c;
    if(b==c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}