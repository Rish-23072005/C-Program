#include<stdio.h>
#include<string.h>
int main()
{
    char w1[50];
   
    printf("enter a word:");
    scanf("%s",w1);
    strupr(w1);
    printf("%s",w1);//upper case
}
