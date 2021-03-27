#include<stdio.h>
int main()
{
   int a[50],b[50],m[100],i,k,n1,n2;
   printf("Enter the range for array a: ");
   scanf("%d",&n1);
   printf("Enter the values for array a: ");
   for(i=0;i<n1;i++)
   {
      scanf("%d",&a[i]);
      m[i]=a[i];
   }
     k=i;
   printf("Enter the range for array b: ");
   scanf("%d",&n2);
   printf("Enter the values for array b: ");
   for(i=0;i<n2;i++)
   {
      scanf("%d",&b[i]);
      m[k]=b[i];
      k++;
   }
   printf("MERGED ARRAY :");
   for(i=0;i<k;i++)
   printf("\t%d",m[i]);
return 0;
}





















































































