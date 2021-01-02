#include <stdio.h>
#include <stdlib.h>

int main()
{
  float a,b,c,d,e,total,percent;
  printf("Enter the marks you got in 5 subjects:\n");
  scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
  total = a + b + c + d + e;
  percent = total/500*100;
  if(percent>=90)
      printf("Your grade is A+");
  else if(percent >=85 && percent <90)
      printf("Your grade is A");
  else if(percent >=80 && percent <85)
      printf("Your grade is B");
  else if(percent >=75 && percent <80)
      printf("Your grade is C");
  else if(percent >=60 && percent <75)
      printf("Your grade is D");
  else if(percent < 60)
      printf("Your grade is E");

  return 0;
}
