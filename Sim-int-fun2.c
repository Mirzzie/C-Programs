#include<stdio.h>
float simpint(float,float,int);
void main()
{
    float p,r,si;
    int n;
    printf("Enter the values of p,n,r:\n");
    scanf("%f%f%d",&p,&r,&n);
    si = simpint(p,n,r);
    printf("Simple intrest:%f",si);
}
 float simpint(float p,float r,int n)
 {
     float s;
     s=p*n*r/100;
     return s;
 }
