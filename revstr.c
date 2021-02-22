#include<stdio.h>
#include<string.h>
int main()
{   
   char a[100],b[100];
   int i,j,l;
   printf("Enter a string:");
   gets(a);
   l = strlen(a);
   for(j=l-1,i=0;a[i]!='\0';i++,j--)
   {
      b[i]=a[j];
   }
      printf("%s",b);
 return 0;
}
