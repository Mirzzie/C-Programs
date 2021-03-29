#include<stdio.h>
int sum(int);
int main()
{
    int n,f;
    printf("Enter a number: \n");
    scanf("%d",&n);
    f=sum(n);
    printf("Sum of digits:%d",f);
    return 0;
}
int sum(int f)
{
    if(f==0)
    return f;
    else
    return (f%10)+sum(f/10);
}