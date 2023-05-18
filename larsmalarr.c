#include <stdio.h>

int find_max_or_min(int arr[], int size, int( * compare)(int, int)) {
  int i, result;
  result = arr[0];
  for (i = 1; i < size; i++) {
    if (compare(result, arr[i]) > 0) {
      result = arr[i];
    }
  }
  return result;
}

int compare_min(int a, int b) {
  return a - b;
}

int compare_max(int a, int b) {
  return b - a;
}

int main() {
  int arr[] = {
    7,
    0,
    4,
    2,
    9,
    5,
    1
  };
  int size = sizeof(arr) / sizeof(int);
  printf("Original array elements: ");
  for (size_t i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  int min = find_max_or_min(arr, size, compare_min);
  int max = find_max_or_min(arr, size, compare_max);
  printf("\n\nThe minimum element is %d\n", min);
  printf("The maximum element is %d\n", max);
  return 0;
}
