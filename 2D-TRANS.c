#include<stdio.h>
int main()
{
    int a[10][10],n,m,i,j;
    printf("ENTER YOUR 2D ARRAY SIZE:");
    scanf("%d%d",&n,&m);
    printf("ENTER YOUR ELEMENTS:");
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
      scanf("%d",&a[i][j]);
    }
    printf("PRINTING YOUR ARRAY:\n");
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)  
      printf("%d\t",a[i][j]);
      printf("\n");
    }
    printf("PRINTING YOUR ARRAY TRANSPOSE:\n");
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)  
      printf("%d\t",a[j][i]);
      printf("\n");
    }

    return 0;

}