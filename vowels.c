#include<stdio.h>
int main()
{
    int i;
    char str[50];
    printf("Enter a string:");
    gets(str);
    printf("Your string: ");
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    printf("The vowels are:");
    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u'))
         printf("%c",str[i]);
    }
    printf("\n");
    printf("The consonants:");
    for(i=0;str[i]!='\0';i++)
    {
        if(!(str[i]=='\0'|| str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u'))
        printf("%c",str[i]);
    }
    return 0;
}