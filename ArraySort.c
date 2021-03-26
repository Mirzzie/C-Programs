#include<stdio.h>
int main()
{
    int a[50],n,i,j,b;
    printf("ENTER THE RANGE OF ARRAY:");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
            for(j=0;j<n;j++)
            {
                if(a[i]>a[j])
                {
                   b=a[i];
                   a[i]=a[j];
                   a[j]=b;
                }
            }
    }
     printf("SORTED INTO ASCENDING ORDER:\n");
    for (i=0;i<n;i++)
    printf("%d\t", a[i]);

return 0;

}