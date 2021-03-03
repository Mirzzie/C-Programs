#include<stdio.h>
int main()
{
   int i,c=0;
   char a[50],f;
   puts("Enter a string:");
   gets(a);
   puts("Enter a character:");
   f=getchar();
   for(i=0;i<=50;i++)
   {
     if(a[i]==f)
     c++;
   }
   printf("The character %c in string %s occurs %d times ",f,a,c);
   return 0;
}


