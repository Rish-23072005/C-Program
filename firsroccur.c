#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], ch;
  	int i, Flag;
  	Flag = 0;
 
  	printf(" Enter any String :  ");
  	gets(str);
  	
  	printf("Enter the Character that Search for :  ");
  	scanf("%c", &ch);
  	
  	for(i = 0;i<=strlen(str); i++)
  	{
  		if(str[i] == ch)  
		{
  			Flag++;
			break;    	
 		}
	}
    if(Flag == 0)
  	{
  		printf("not found: '%c' ", ch);
	}
	else
	{
		printf("postion of character: '%c' is at Position %d ", ch, i + 1);
	}	
  	return 0;
}