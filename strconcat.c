#include <stdio.h>
int main() {
  char s1[100],s2[50];
  int length, j;
  printf("enter s1:");
  gets(s1);
  printf("enter s2:");
  gets(s2);

  length = 0;
  while (s1[length] != '\0') {
    ++length;
  }

  
  for (j = 0; s2[j] != '\0'; ++j, ++length) {
    s1[length] = s2[j];
  }

  s1[length] = '\0';

  printf("After concatenation: ");
  puts(s1);

  return 0;
}