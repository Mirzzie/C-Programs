
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float s,a,b,c,area;
    printf("This program is to find area of a triangle :)\n");
    printf("ENTER THE THREE SIDES OF YOUR TRIANGLE:\n");
    printf("A->");
    scanf("%f",&a);
    printf("B->");
    scanf("%f",&b);
    printf("C->");
    scanf("%f",&c);
    s = (a + b + c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("AREA OF YOUR TRIANGLE -> %f\n",area);
    return 0;
}
