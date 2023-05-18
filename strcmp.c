#include <stdio.h>  
#include<string.h>
int value;  
int main()  
{  
   char str1[50];  
   char str2[55];  
   printf("Enter the first string :");  
   scanf("%s",str1);  
   printf("Enter the second string :");  
   scanf("%s",str2);  
   
   
   value = strcmp(str1,str2);  
   if(value == 0)  
   printf("strings are same");  
   else  
   printf("strings are not same");  
   return 0;  
}  