#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int len,vowel,cons,i;
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);	

    vowel = 0;
    cons = 0;
    len = strlen(str);
    for(i=0; i<len; i++)
    {

        if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
        {
            vowel++;
        }
        else if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            cons++;
        }
    }
    printf(" %d ", vowel);
    printf(" %d ", cons);
}