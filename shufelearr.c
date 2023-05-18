
#include <stdio.h>

#include <stdlib.h>

#include <time.h>

void shuffle(int * array, size_t n, int( * rand_func)(void)) {
  for (int i = n - 1; i > 0; i--) {
    int j = rand_func() % (i + 1);
    int tmp = array[i];
    array[i] = array[j];
    array[j] = tmp;
  }
}

int main() {
  int arr[] = {
    1,
    2,
    3,
    4,
    5
  };
  size_t n = sizeof(arr) / sizeof(int);
  printf("Original array elements: ");
  for (size_t i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  // Seed the random number generator
  srand(time(NULL));

  // Shuffle the array using rand() as the random number generator
  shuffle(arr, n, rand);

  // Print the shuffled array
  printf("\nShuffled array elements: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}