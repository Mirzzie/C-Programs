#include<stdio.h>
int main()
{
    int a=0,b=1,n,i,c;
    printf("Enter the no of terms: ");
    scanf("%d",&n);
    printf("Fibonacci series: ");
    for(i=1;i<=n;i++)
    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}