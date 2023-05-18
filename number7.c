#include<stdio.h>
#include<conio.h>
int main()
{
int i, s, n, j = 0, c = 0, c1 = 0;
printf("Enter the number of rows: ");
scanf("%d",&n);
for(i = 1; i <= n; ++i)
{
for(s = 1; s <= n-i; ++s)
{
printf("  ");
++c;
}
while(j != 2 * i - 1)
{
if (c <= n - 1)
{
printf("%d ", i + j);
++c;
}
else
{
++c1;
printf("%d ", (i + j - 2 * c1));
}
++j;
}
c1 = c = j = 0;
printf("\n");
}
return 0;
}