#include<stdio.h>
#include<conio.h>
int main()
{
int n, i, j, c = 1;
int m[5][5] = {0};
printf("Enter the number of rows: ");
scanf("%d",&n);
for(i = 1; i <= 5; i++)
{
for(j = 1; j <= 5; j++)
if(j == i || 6-i == j)
m[i-1][j-1] = c;
if(i < 4) ++c;
else --c;
}
for(i = 0; i < 5; i++)
{
for(j = 0; j < 5; j++)
{
if(m[i][j] == 0)
printf(" ");
else
printf("%d",m[i][j]);
}
printf("\n");
}
return 0;
}