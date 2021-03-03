#include<stdio.h>
int main()
{
   int i,j,n,t;
   printf("Enter the limit:");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     for(j=n;j>i;j--)
     {
        printf("*");
        i++;
     }
      printf("\n");
   }

   for(i=0;i<n;i++)
   {
     for(j=n;j>i;j--)
     {
        printf("*");
        i++;
     }
      printf("\n");
   }

  return 0;
}
