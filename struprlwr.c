
#include <stdio.h>

#include <ctype.h>


void modify_string(char * str, int( * modifier)(int)) {
  while ( * str != '\0') {
    * str = modifier( * str);
    str++;
  }
}

int main() {
  char str[100];
  printf("Input a string: ");
  fgets(str, sizeof(str), stdin);

  printf("Select an option:\n");
  printf("1. Convert to uppercase\n");
  printf("2. Convert to lowercase\n");
  int option;
  scanf("%d", & option);

  switch (option) {
  case 1:
    modify_string(str, toupper);
    printf("Uppercase string: %s", str);
    break;
  case 2:
    modify_string(str, tolower);
    printf("Lowercase string: %s", str);
    break;
  default:
    printf("Invalid option");
    break;
  }

  return 0;
}