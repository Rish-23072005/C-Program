
#include <stdio.h>

#include <stdlib.h>

 // Define the type of the comparison function callback
typedef int( * compare_func_t)(const void * ,
  const void * );
// Implementation of the bsearch() function using a callback function
void * bsearch(const void * key,
  const void * base, size_t nmemb, size_t size, compare_func_t compare) {
  size_t left = 0, right = nmemb - 1;
  while (left <= right) {
    size_t mid = (left + right) / 2;
    int result = compare(key, (const char * ) base + mid * size);
    if (result < 0) {
      right = mid - 1;
    } else if (result > 0) {
      left = mid + 1;
    } else {
      return (void * )((const char * ) base + mid * size);
    }
  }
  return NULL;
}
// Example usage of the bsearch() function
int compare_ints(const void * a,
  const void * b) {
  const int * pa = (const int * ) a;
  const int * pb = (const int * ) b;
  return ( * pa > * pb) - ( * pa < * pb);
}
int main() {
  int arr[] = {
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    10
  };
  printf("Array elements: ");
  for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
    printf("%d ", arr[i]);
  }

  int key = 8;
  int * result = (int * ) bsearch( & key, arr, sizeof(arr) / sizeof(int), sizeof(int), compare_ints);
  if (result != NULL) {
    printf("\n%d found at index %ld\n", * result, result - arr);
  } else {
    printf("Could not find the number.", key);
  }
  return 0;
}