#include <stdio.h>

int binarySearch(int arr[], int target, int left, int right) {
  if (left > right) {
    return -1; 
  }

  int mid = (left + right) / 2;

  if (arr[mid] == target) {
    return mid; 
  } else if (arr[mid] > target) {
    return binarySearch(arr, target, left, mid - 1);
  } else {
    return binarySearch(arr, target, mid + 1, right); 
  }
}

int main() {
  int n, target;

  printf("Enter number of elements: ");
  scanf("%d", &n);
  printf("Enter target element: ");
  scanf("%d", &target);

  int arr[n];
  for (int i = 0; i < n; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &arr[i]);
  }

  int index = binarySearch(arr, target, 0, n - 1);

  if (index == -1) {
    printf("Target element not found in the array.\n");
  } else {
    printf("Target element found at index %d.\n", index);
  }

  return 0;
}

