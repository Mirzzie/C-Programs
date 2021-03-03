#include<stdio.h>
#define H 60
int main()
{
    typedef int hours;
    hours hrs;
    printf("Enter hours:");
    scanf("%d",&hrs);
    printf("Minutes=%d\n",hrs*H);
    printf("Seconds=%d",hrs*H*H);
    return 0;
}