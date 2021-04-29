#include<stdio.h>
int main()
{
    int a,b,c,d,*ap,*bp;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    ap=&a;
    bp=&b;
    c=a+b;
    d=*ap+*bp;
    printf("Sum of a and b using variable is %d\n",c);
    printf("Sum of a and b using pointer is %d",d);
    return 0;
}