#include <stdio.h>

int binarySearch(int nums[], int target, int left, int right) {
  if (left > right) {
    return -1;
  }
  int mid = (left + right) / 2;
  if (nums[mid] == target) {
    return mid;
  } else if (nums[mid] > target) {
    return binarySearch(nums, target, left, mid - 1);
  } else {
    return binarySearch(nums, target, mid + 1, right);
  }
}

int main() {
  int nums[] = {45, 4, 23, -11, 20, 5, 10, 50};
  int target = 5;
  int result = binarySearch(nums, target, 0, 7);
  if (result == -1) {
    printf("Element not found");
  } else {
    printf("Element found at index %d", result);
  }
  return 0;
}

