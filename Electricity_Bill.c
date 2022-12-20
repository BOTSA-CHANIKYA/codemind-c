#include<stdio.h>
int main()
{
    int a;
	scanf("%d",&a);
	float b,sc,tb,cp;
	if(a<=199)
	{
	    cp=1.20;
	    b=a*cp;
	}
	else if (a>=200 && a<400)
	{
	    cp=1.40;
	    b=a*cp;
	}
	else if(a>=400 && a<600)
	{
	    cp=1.60;
	    b=a*cp;
	}
	else if (a>=600&&a<800) 
	{
	    cp=1.80;
	    b=a*cp;
	}
	else if(a>=800)
	{
	   cp=2.00;
	   b=a*cp;
	}
	if(b>=400) 
	{
	    sc=b*0.15;
	}
	else 
	{
	    sc=0.00;
	}
	tb=b+sc;
	printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",a,cp,b,sc,tb);
}