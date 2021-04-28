#include<stdio.h>
int main()
{
    int i,count_lower,count_upper,count_special;
    char ch[50];
    puts("Enter a string:\n");
    gets(ch);
    count_lower=count_upper=count_special=0;
    for(i=0; ch[i]!='\0'; i++)
    {
        if((ch[i]>='A' && ch[i]<='Z')||(ch[i]>='a'&&ch[i]<='z'))
        {

            if(ch[i]>='A' && ch[i]<='Z')
                {
                    count_upper++;
                }


                else
                {
                    count_lower++;
                }
        }
            else

                count_special++;
        }
        printf("UpperCase:%d\n",count_upper);
        printf("LowerCase:%d\n",count_lower);
        printf("SpecialCase:%d\n",count_special);
        return 0;

}