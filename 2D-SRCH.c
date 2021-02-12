#include<stdio.h>
int main()
{
    int a[10][10],r,c,e,i,j,f=0;
    /* f variable is a flag */
    printf("ENTER THE RANGE OF FIRST MATRIX:");
    scanf("%d%d",&r,&c);
    printf("ENTER ELEMENTS FOR FIRST MATRIX:");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++)
    scanf("%d",&a[i][j]);
    printf("ENTER THE ELEMENT TO BE SEARCHED:");
    scanf("%d",&e);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==e)
            {
                f=1;
                break;
            }
        }
    }
    if(f==1)
    {
        printf
    }




return 0;

}