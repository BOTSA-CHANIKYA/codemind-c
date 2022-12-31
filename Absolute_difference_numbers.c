#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c=0,d,s,z,q;
    scanf("%d%d",&a,&b);
    d=a;
    while(a!=0)
    {
        c++;
        a=a/10;
    }
    q=(pow(10,b));
       s=d%q;
       z=d/pow(10,(c-b));
       int w=abs(z-s);
       printf("%d",w);
}