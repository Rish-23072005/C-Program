#include <stdio.h>
#include <string.h>
 
int main()
{
    
    int n = 100;
    
    
    char str[n];
    printf("Input String: ");
    gets(str);

    char letter;
    printf("Input letter to be searched: ");
    letter = getchar();
    
    int cnt = 0;
   
    
    for(int i = 0; str[i]; i++)  
    {
    	if(str[i] == letter)
    	{
          cnt++;
        }
    }
     
	printf("The value '%c' has occurred %d time in the string \n ", letter, cnt);
     
    return 0;
}
