#include<stdio.h>
int main()
{
    int a[50],n,e,i,f=0;
    /* f variable is a flag */
    printf("ENTER THE RANGE OF ARRAY:");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("ENTER THE ELEMENT TO BE SEARCHED:");
    scanf("%d",&e);
    for(i=0;i<n;i++)
    {
            if(a[i]==e)
            f=1;
    }
    if(f==1)
    printf("%d IS PRESENT",e);
    else
    printf("%d IS NOT PRESENT",e);
return 0;

}