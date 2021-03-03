#include<stdio.h>
int main()
{
    struct pro
    {
       int qnt,pr,t;
       char name[50];
    }p[10];

    int n,i;

   printf("Enter the number of items:");
   scanf("%d",&n);
   printf("Enter the name,price and quantity:");
   for(i=0;i<n;i++)
   {
   scanf("%s%d%d",p[i].name,&p[i].pr,&p[i].qnt);
   p[i].t=p[i].pr*p[i].qnt;
   }
   printf("ITEM\tPRICE\tQUANTITY\tTOTAL\n");
   for(i=0;i<n;i++)
   printf("%s\t%d\t%d\t%d\n",p[i].name,p[i].pr,p[i].qnt,p[i].t);
   return 0;
}
