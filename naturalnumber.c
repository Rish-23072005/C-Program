#include <stdio.h>
int main()
{
int i, end;
 printf("Print all natural numbers from 1 to : ");
 scanf("%d", &end);
 i=1;
 while(i<=end)
 {
 printf("%d\n", i);
 i++;
 }
 return 0;
}