#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,temp;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\nNumber1:%d" ,num1);
    printf("\nNumber2:%d",num2);
    return 0;
}
