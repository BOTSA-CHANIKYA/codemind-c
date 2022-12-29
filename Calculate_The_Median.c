#include<stdio.h>
int main()
{
    int a,i,j,s;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++)
    {
      for(j=0;j<a;j++)
      {
          if(n[i]>n[j])
          {
             s=n[i];
             n[i]=n[j];
             n[j]=s;
          }
      }
    }
    if(a%2==0)
    {
        printf("%d",n[(a/2)-1]);
    }
    else
    {
        printf("%d",n[(a/2)]);
    }
}