#include<stdio.h>
int main()
{
    int a[10][10],r,c,i,j,f=0;
    printf("ENTER YOUR MATRIX ORDER:");
    scanf("%d%d",&r,&c);
    printf("ENTER YOUR ELEMENTS:");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      scanf("%d",&a[i][j]);
    }
    printf("YOUR MATRIX:\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
      printf("%d\t",a[i][j]);
      printf("\n");
    }
    printf("TRANSPOSE OF MATRIX:\n");
    for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
        {
           printf("%d\t",a[j][i]);
       }
       printf("\n");
    }
     for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
    {
       if(a[i][j]!=a[j][i])
       {
        printf("YOUR MATRIX IS NOT SYMMETRIC");
        f=0;
        break;
       }
       else
       f=1;
      break;
    }
  }
      if(f==1)
      printf("YOUR MATRIX IS SYMMETRIC");
    return 0;
}
