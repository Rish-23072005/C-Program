#include <stdio.h>

#include <stdlib.h>


typedef int( * compare_func_t)(const void * ,
  const void * );
void swap(void * a, void * b, size_t size) {
  char * p = (char * ) a;
  char * q = (char * ) b;
  char tmp;
  for (size_t i = 0; i < size; i++) {
    tmp = p[i];
    p[i] = q[i];
    q[i] = tmp;
  }
}
void * partition(void * base, size_t nmemb, size_t size, compare_func_t compare) {
  char * pivot = (char * ) base;
  char * left = (char * ) base + size;
  char * right = (char * ) base + (nmemb - 1) * size;
  while (1) {
    while (left <= right && compare(left, pivot) < 0) {
      left += size;
    }
    while (left <= right && compare(right, pivot) > 0) {
      right -= size;
    }
    if (left > right) {
      break;
    }
    swap(left, right, size);
    left += size;
    right -= size;
  }
  swap(pivot, right, size);
  return (void * ) right;
}
void quicksort(void * base, size_t nmemb, size_t size, compare_func_t compare) {
  if (nmemb <= 1) {
    return;
  }
  char * cbase = (char * ) base; // Cast the void* pointer to a char* pointer
  void * pivot = partition(cbase, nmemb, size, compare);
  quicksort(cbase, ((char * ) pivot - cbase) / size, size, compare); // Cast pointers to char* before doing pointer arithmetic
  quicksort((char * ) pivot + size, nmemb - ((char * ) pivot - cbase) / size - 1, size, compare); // Cast pointers to char* before doing pointer arithmetic
}
int intcmp(const void * a,
  const void * b) {
  return ( * (int * ) a - * (int * ) b);
}
int main() {
  int arr[] = {
    5,
    2,
    8,
    7,
    1,
    3,
    6,
    4
  };
  size_t nmemb = sizeof(arr) / sizeof(arr[0]);

  printf("Before sorting: ");
  for (size_t i = 0; i < nmemb; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  quicksort(arr, nmemb, sizeof(int), intcmp);
  printf("After sorting: ");
  for (size_t i = 0; i < nmemb; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}