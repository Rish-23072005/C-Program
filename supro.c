#include <stdio.h>
#include <stdlib.h>

typedef int( * operation_func_t)(int, int);
int calculate(int * arr, size_t n, int initial_value, operation_func_t operation) {
  int result = initial_value;
  for (size_t i = 0; i < n; i++) {
    result = operation(result, arr[i]);
  }
  return result;
}

int sum(int a, int b) {
  return a + b;
}

int product(int a, int b) {
  return a * b;
}
int main() {
  int arr[] = {
    15,
    30,
    30,
    45,
    55,
    65
  };
  size_t n = sizeof(arr) / sizeof(int);
  printf("Original array elements: ");
  for (size_t i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  int sum_result = calculate(arr, n, 0, sum);
  printf("\nSum: %d", sum_result);
  int product_result = calculate(arr, n, 1, product);
  printf("\nProduct: %d", product_result);

  return 0;
}