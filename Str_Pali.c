#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,f;
    char ch[50];
    printf("Enter the string:");
    gets(ch);
    l=strlen(ch);
    for(i=0;i<l;i++)
    {
        if(ch[i]!=ch[l-i-1])
        {
            f=1;
            break;
        }
    }
if(f==1)
{
    printf("String is not palindrome");
}
else
printf("String is a palindrome");
return 0;
}