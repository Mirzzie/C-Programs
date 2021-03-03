#include<stdio.h>

int main()
{
    int n,d=0,s=0,t;
    printf("Amstrong numbers upto 1000\n");
    for(n=1;n<=1000;n++)
    {
        t=n;
        s=0;
        while(t>0)
        {
            d=t%10;
            t=t/10;
            s=s+(d*d*d);
        }
        if(s==n)
            printf("%d\n",n);
    }
    return 0;
}