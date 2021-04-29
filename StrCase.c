#include<stdio.h>
int main()
{
    int i,f;
    char ch[50];
    printf("Enter a string: ");
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='a'&& ch[i]<='z')
        {
            ch[i]=ch[i]-32;
        }
    }
    printf("Uppercase:%s\n",ch);


    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='A'&& ch[i]<='Z')
        {
            ch[i]=ch[i]+32;
        }

    }
    printf("Lowercase:%s",ch);
    return 0;
}
