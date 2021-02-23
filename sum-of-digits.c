#include<stdio.h>
int main()
{ 
   int s=0,d,n,t;
   printf("Enter a number:");
   scanf("%d",&n);
   t=n;
   while(n>0)
   {  
      d=n%10;
      n=n/10;
      s=s+d;
    }
    printf("Sum of digits is %d",s);
   return 0;
}
        
 
    


   
