#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,eq1,eq2,ans;
    printf("Enter Values for a, b ,c:\n");
    scanf("%d%d%d",&a,&b,&c);
    if((b*b) > (4*a*c))
    {
      eq1 = -b-sqrt(b*b-4*a*c)/2*a;
      eq2 = -b+sqrt(b*b-4*a*c)/2*a;
      printf("EQUATION 1 = %f\n",eq1);
      printf("EQUATION 2 = %f",eq2);
    }

   else

      printf("MATH ERROR :/");

    return 0;
}


