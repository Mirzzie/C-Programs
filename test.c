#include<stdio.h>
int main()
{
    int a[100],b[100],s[100],i,j,n1,n2,sm=0;
    printf("Enter size of array 1:");
    scanf("%d",&n1);
    printf("Enter size of array 2:");
    scanf("%d",&n2);
    printf("Enter the elements for ar1:");
    for(i=0;i<=n1;i++)
    scanf("%d",&a[i]);
    printf("Enter the elements for ar2:");
    for(j=0;j<n2;j++)
    scanf("%d",&b[j]);
    for(i=0;i<n1;i++)
    {
        
       for(j=0;i<n2;j++)
       s[j] = a[i]+b[j];
       scanf("%d",s[j]);
       printf("%d",s[j]);


    }
      
      return 0;
}