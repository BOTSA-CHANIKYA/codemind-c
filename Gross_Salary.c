#include<stdio.h>
float salary(int b)
{
    float g;
    if(b<=10000)
{
   g=b+(b*0.8)+(b*0.2);
}  
else if(b<=20000)
{
   g=b+(b*0.9)+(b*0.25);
}
else if(b>20000)
{
    g=b+(b*0.95)+(b*0.3);
}
return g;
}
int main()
{
    int b;
    scanf("%d",&b);
    float s=salary(b);
    printf("%.2f",s);
}
