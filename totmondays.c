#include <stdio.h>

int main()
{
    int month;
    printf("Enter month number(1-12): ");
    scanf("%d", &month);
    switch(month)
{
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days.");
        break;
}
}