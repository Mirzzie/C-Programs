#include<stdio.h>
void simpint(float,float,int);
void main()
{
    float p,r;
    int n;
    printf("Enter the values of p,n,r:\n");
    scanf("%f%f%d",&p,&r,&n);
    simpint(p,n,r);
}
 void simpint(float p,float r,int n)
 {
     float si;
     si=p*n*r/100;
     printf("Simple intrest:%f",si);
 }
