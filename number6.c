#include<stdio.h>
#include<conio.h>
int main()
{
int n, i, j;
printf("Enter the number of rows: ");
scanf("%d",&n);
for(i =1; i <= n; i++)
{
for(j =1; j <= n; j++)
{
if(j <= i)
printf("%d",j);
else
printf(" ");
}
for(j = n; j >= 1;j--)
{
if(j <= i)
printf("%d",j);
else
printf(" ");
}
printf("\n");
}
return 0;
}