#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float f;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    f=sqrt(pow(a-c,2)+pow(b-d,2));
    printf("%.4f",f);
    
}