#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],s[10][10],r1,c1,r2,c2,i,j;
    printf("ENTER THE RANGE OF FIRST MATRIX:");
    scanf("%d%d",&r1,&c1);
    printf("ENTER ELEMENTS FOR FIRST MATRIX:");
    for(i=0;i<r1;i++)
    for(j=0;j<c1;j++)
    scanf("%d",&a[i][j]);
    printf("ENTER THE RANGE OF SECOND MATRIX:");
    scanf("%d%d",&r2,&c2);
    printf("ENTER THE ELEMENTS FOR SECOND MATRIX:");
    for(i=0;i<r2;i++)
    for(j=0;j<c2;j++)
    scanf("%d",&b[i][j]);
    if(r1==r2 && c1==c2)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                s[i][j]=a[i][j]+b[i][j];
                printf("%d\t",s[i][j]);
            }
            printf("\n");
        }
    }
   else
   printf("ADDITION IS NOT POSSIBLE");

return 0;

}