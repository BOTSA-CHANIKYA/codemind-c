#include<stdio.h>
#include<math.h>
int main()
{
double p,r,t;
double d;
scanf("%lf%lf%lf",&p,&r,&t);
d=p*(pow(1+(r/100),t))-p;
printf("%.2lf",d);
}
