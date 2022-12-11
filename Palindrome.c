#include<stdio.h>
int main()
{
    int a,s,i,f=0,t;
    scanf("%d",&a);
    t=a;
    while(a!=0)
    {
        s=a%10;
        f=f*10+s;
        a=a/10;
        
    }
    if(t==f)
        {
            printf("Palindrome");
        }
        else 
        {
            printf("Not Palindrome");
        }
}