#include<stdio.h>

int main()
{
    int a[10][10],m,n,f=0,i,j;
    printf("ENTER RANGE OF ARRAY:");
    scanf("%d%d",&m,&n);
    printf("ENTER ARRAY ELEMENT:");
    for(i=0; i<m; i++)
    {
    for(j=0; j<n; j++)
    scanf("%d",&a[i][j]);
    }
    printf("MATRIX\n");
    for(i=0; i<m; i++)
    {
    for(j=0; j<n; j++)
    printf("%d\t",a[i][j]);
    printf("\n");
    }
    printf("TRANSPOSE OF MATRIX\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        printf("%d\t",a[j][i]);
        printf("\n");
        }
            
    for(i=0; i<m; i++)
    {
   for(j=0; j<n; j++)
    {
    if(a[i][j]!=a[j][i])
    {
    f=1;
    break;
    }

    }
    }


    if(f==1)
        printf("MATRIX IS NOT SYMMETRIC");
    else
        printf("MATRIX IS SYMMETRIC MATRIX");



    return 0;
}