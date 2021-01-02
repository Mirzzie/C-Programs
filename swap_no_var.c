#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("A Before swap:%d\n",a);
    printf("B before swap:%d\n",b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("swapped a = %d\n",a);
    printf("Swapped b =%d",b);
    return 0;
}

