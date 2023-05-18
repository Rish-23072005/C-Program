#include <stdio.h>
int main()
{
 int n, firstDigit,lastdigit;
 /* Input number from user */
 printf("Enter any number: ");
 scanf("%d", &n);
lastdigit=n%10;
 /* Get the first digit */
while(n>=10)
{
n=n/10;
}
firstDigit = n ;
 printf("First Digit = %d and Last digit = %d",firstDigit, lastdigit);
 return 0;
}