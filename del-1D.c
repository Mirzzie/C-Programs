#include<stdio.h>
int main()
{
  int a[100],n,m,i;
  printf("Enter the limit:");
  scanf("%d",&n);
  printf("Enter a number:");
  for(i=0;i<=n;i++)
  scanf("%d",&a[i]);
  printf("Enter the location to be deleted:");
  scanf("%d",&m);
  for(i=m;i<=n;i++)
  a[i]=a[i+1];
  printf("Array after deletion:\n");
  for(i=0;i<=n-1;i++)
  printf("%d\t",a[i]);
  return 0;
}
