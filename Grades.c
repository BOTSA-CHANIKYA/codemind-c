#include<stdio.h>
int  main()
{
    int a,b,c,d,e,f,g;
    scanf("%d%d%d%d%d",&a,&b,&c,&e,&f);
    g=(a+b+c+e+f)/5;
    if(g>=90)
    {
        printf("Grade A");
    }
    else  if(g>=80)
    {
        printf("Grade B");
    }
    else if(g>=70)
    {
        printf("Grade C");
    }
    else if(g>=60)
    {
        printf("Grade D");
    }
    else if(g>=40)
    {
        printf("Grade E");
    }
    else if(g<40)
    {
        printf("Grade F");
    }
}