#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
char b[100];
printf("enter a:");
gets(a);
printf("enter b");
gets(b);
strcat(a,b);
printf("%s",a);
return 0;

}
