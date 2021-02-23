#include<stdio.h>
int main()
{
   int d,r=0,t,n;
   printf("Enter a number:");
   scanf("%d",&n);
   t=n;
   while(t>0)
   {
     d=t%10;
     r+=d*d*d;
     t=t/10;
   }
    if(r==n)
    printf("%d number is armstrong",n);
    else
    printf("%d number is not armstrong",n);
return 0;
}    
