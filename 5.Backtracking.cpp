#include <stdio.h>
#include <stdbool.h>

void subsetSum(int set[], int n, int target, bool found[], int* count) {
  if (target == 0) {
    found[*count] = true;
    (*count)++;
    return;
  } else if (n == 0 || target < 0) {
    return;
  }

  subsetSum(set, n - 1, target, found, count);
  if (target >= set[n - 1]) {
    subsetSum(set, n - 1, target - set[n - 1], found, count);
  }
}

int main() {
  int set[] = {6, 2, 8, 1, 5};
  int n = sizeof(set) / sizeof(set[0]);
  int target = 9;
  bool found[100];
  int count = 0;

  subsetSum(set, n, target, found, &count);

  if (count > 0) {
    printf("Subsets that sum to %d:\n", target);
    for (int i = 0; i < count; i++) {
      if (found[i]) {
        printf("{");
        for (int j = 0; j < n; j++) {
          if (found[i * n + j]) {
            printf("%d, ", set[j]);
          }
        }
        printf("\b\b}\n");
      }
    }
  } else {
    printf("No subset found\n");
  }

  return 0;
}

