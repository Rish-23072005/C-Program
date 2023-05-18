
#include <stdio.h>

#include <string.h>

#include <ctype.h>

void remove_whitespace(char * str, void( * modify)(char * )) {
  int i, j = 0;
  for (i = 0; str[i] != '\0'; i++) {
    if (!isspace(str[i])) {
      str[j] = str[i];
      j++;
    } else {
      modify( & str[i]);
    }
  }
  str[j] = '\0';
}
void remove_space(char * ch) {
  * ch = '\0';
}
int main() {
  char str[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0'; // remove the newline character
  printf("Original string: %s\n", str);

  // remove whitespace using callback function
  remove_whitespace(str, remove_space);

  printf("String without whitespace: %s\n", str);

  return 0;
}