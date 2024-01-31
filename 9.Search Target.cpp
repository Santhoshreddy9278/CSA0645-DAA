#include <stdio.h>

int sumOfDigits(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int maxSumPair(int nums[], int size) {
  int max_sum = 0;
  for (int i = 0; i < size; i++) {
    for (int j = i; j < size; j++) {
      if (i == j && sumOfDigits(nums[i]) == sumOfDigits(nums[j])) {
        int current_sum = nums[i] + nums[j];
        if (current_sum > max_sum) {
          max_sum = current_sum;
        }
      }
    }
  }
  return max_sum;
}

int main() {
  int n;

  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  int nums[n];
  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &nums[i]);
  }

  int max_sum = maxSumPair(nums, n);
  printf("Maximum value of nums[i] + nums[j] such that i = j and sum of digits of nums[i] and nums[j] is equal: %d\n", max_sum);

  return 0;
}
