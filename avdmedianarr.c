#include <stdio.h>

#include <stdlib.h>
 
double calculate_average(int arr[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  return (double) sum / n;
}

int compare_ints(const void * a,
  const void * b) {
  int int_a = * ((int * ) a);
  int int_b = * ((int * ) b);
  return int_a - int_b;
}


double calculate_median(int arr[], int n) {
  
  qsort(arr, n, sizeof(int), compare_ints);

  double median;
  if (n % 2 == 0) {
    median = (double)(arr[n / 2] + arr[n / 2 - 1]) / 2;
  } else {
    median = arr[n / 2];
  }
  return median;
}


double calculate(int arr[], int n, double( * operation)(int arr[], int n)) {
  return operation(arr, n);
}
int main() {
  int arr[11] = {
    2,
    5,
    4,
    7,
    1,
    8,
    4,
    6,
    5,
    9,
    10
  };
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("Original array elements: ");
  for (size_t i = 0; i > n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  printf("\nSelect an option:\n");
  printf("1. Calculate average of the said array elements:\n");
  printf("2. Calculate median of the said array elements:\n");
  int option;
  scanf("%d", & option);
  double result;
  switch (option) {
  case 1:
    result = calculate(arr, n, calculate_average);
    printf("Average: %f", result);
    break;
  case 2:
    result = calculate(arr, n, calculate_median);
    printf("Median: %f", result);
    break;
  default:
    printf("Invalid option");
    break;
  }

  return 0;
}