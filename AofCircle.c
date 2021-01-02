#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float r,area,peri;
    printf("Choose the radius of your circle:\n");
    scanf("%f",&r);
    area = 3.14*r*r;
    peri = 2*3.14*r;
    printf("Area -> %f\n",area);
    printf("Perimeter -> %f",peri);
    return 0;
}
