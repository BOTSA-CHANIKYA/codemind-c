#include<stdio.h>
int tringle(float a,float b,float c)
{
     if((a+b)>c&&(a+c)>b&&(b+c)>a)
     {
         return 0;
     }
     else 
     {
         return 1;
     }
}
int main()
    {
        float a,b,c;
        scanf("%f%f%f",&a,&b,&c);
        int s=tringle(a,b,c);
        if(s==0)
        {
            printf("Valid triangle");
        }
        else if(s==1)
        {
        printf("Invalid triangle");    
        }
    }