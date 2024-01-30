#include <stdio.h>

// Function to calculate binomial coefficient
int binomialCoeff(int n, int k) {
  if (k == 0 || k == n) {
    return 1;
  } else {
    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
  }
}

// Function to print a row of Pascal's Triangle
void printPascalRow(int n, int row) {
  for (int k = 0; k <= row; k++) {
    printf("%d ", binomialCoeff(n, k));
  }
  printf("\n");
}

// Function to print Pascal's Triangle for n rows
void printPascalTriangle(int n) {
  for (int row = 0; row < n; row++) {
    printPascalRow(n, row);
  }
}

int main() {
  int n;

  printf("Enter the number of rows: ");
  scanf("%d", &n);

  printf("Pascal's Triangle for %d rows:\n", n);
  printPascalTriangle(n);

  return 0;
}

