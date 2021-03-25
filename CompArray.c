#include<stdio.h>
int main()
{
    int a[50],l,s,n,i;
    printf("ENTER THE RANGE OF ARRAY:");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    l=s=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
        l=a[i];
        if(a[i]<s)
        s=a[i];

    }
    printf("The smallest element is %d\n",s);
    printf("The largest element is %d\n",l);
return 0;

}