#include<stdio.h>
int sum(int);
int main()
{
    int a,b;
    printf("Enter a number:");
    scanf("%d",&a);
    sum(a);
    return 0;
}
int sum (int x)
{
    int d;
    int s=0;
    while(x>0)
    {
        d=x%10;
        x=x/10;
        s=s+d;
    }
    printf("Sum=%d",s);
    return s;
}
