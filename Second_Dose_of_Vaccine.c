#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
      int b,c,d;
      scanf("%d%d%d",&b,&c,&d);
      if(b>=c&&d>b)
      {
          printf("Take second dose now
");
      }
      else if(b>=c&&c<d/2)
      {
          printf("Too Late
");
      }
      else 
      {
          printf("Too Early
");
      }
    }
}