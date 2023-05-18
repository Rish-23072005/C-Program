#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int alpha,digit,spech,i;
    alpha=digit=spech=i=0;
   
    printf("enter a string:");
    fgets(str,sizeof str,stdin);
     while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alpha++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            spech++;
        }

        i++;
    }

    printf(" %d ", alpha);
    printf(" %d ", digit);
    printf(" %d ", spech);
}