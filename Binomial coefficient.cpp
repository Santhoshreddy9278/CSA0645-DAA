#include <stdio.h>

int binomialCoeff(int n, int k) {
  if (k == 0 || k == n) {
    return 1;
  } else {
    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
  }
}

int main() {
  int n, k;
  printf("Enter n: ");
  scanf("%d", &n);
  printf("Enter k: ");
  scanf("%d", &k);

  int result = binomialCoeff(n, k);
  printf("Binomial coefficient C(%d, %d) is %d\n", n, k, result);

  return 0;
}

