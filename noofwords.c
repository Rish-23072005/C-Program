#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
  
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);	
    int word=1;
    int i=0;
    while(str[i]!='\0')
    {
        /* check whether the current character is white space or new line or tab character*/
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            word++;
        }

        i++;
    }

    printf(" %d ", word-1);
}