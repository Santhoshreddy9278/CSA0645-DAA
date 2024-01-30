#include <stdio.h>

int main() {
  int arr[] = {16, 16, 16, 16, 16};
  int M = 0;
  int N = 1;

  int max = arr[0];
  for (int i = 1; i < N; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  int min = arr[0];
  for (int i = 1; i < N; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }

  printf("Sum = %d\n", max + min);
  printf("Difference = %d\n", max - min);

  return 0;
}
