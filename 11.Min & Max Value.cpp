#include <stdio.h>

int minMax(int arr[], int low, int high, int* comparisons) {
  if (low == high) {
    *comparisons += 2;
    return arr[low];
  } else if (low + 1 == high) {
    *comparisons += 3; 
    if (arr[low] < arr[high]) {
      return arr[low];
    } else {
      return arr[high];
    }
  } else {
    int mid = (low + high) / 2;
    int minLeft = minMax(arr, low, mid, comparisons);
    int minRight = minMax(arr, mid + 1, high, comparisons);
    *comparisons += 1;
    return minLeft < minRight ? minLeft : minRight;
  }
}

int main() {
  int n;
  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter the elements: ");
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int comparisons = 0;
  int minMaxVal = minMax(arr, 0, n - 1, &comparisons);

  printf("Minimum and maximum value: %d\n", minMaxVal);
  printf("Number of comparisons: %d\n", comparisons);

  return 0;
}
