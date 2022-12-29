#include<stdio.h>
#include<math.h>
int main()
{
   int i,k;
   scanf("%d",&k);
   for(i=1;i<=k;i++)
   {
    int a,b;
    int e,c,s,z,f,d=0,x,n;
    scanf("%d",&a);
    b=a;
    while(a!=0)
    {
        n=a%10;
        d++;
        a=a/10;
    }
    x=pow(10,d-1);
        c=b%10;
        e=b/x;
        s=e+c;
        printf("%d
",s);
   }    
}