#include<stdio.h>
int main()
{
    int a[50],n,i;
    printf("ENTER THE RANGE OF ARRAY:");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("YOUR ARRAY ELEMENTS ARE:\n");
    for(i=0;i<n;i++)
    {
            printf("%d\t",a[i]);
    }
return 0;

}