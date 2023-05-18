#include <string.h>
#include<stdio.h>
 
int main()
{
    char s[1000],c;  
    int i,k=0;
 
    printf("Enter  the string : ");
    gets(s);
    printf("Enter character to be searched: ");
    c=getchar();
    
    for(i=strlen(s)-1;i>=0;i--)  
    {
    	if(s[i]==c)
    	{
		  k=1;
    	  break;
		}
 	}
    if(k)
 	    printf("character  %c  is last occurrence at location:%d ",c,i);
    else
        printf("character is not in the string ");
 
 	 
     
    return 0;
}