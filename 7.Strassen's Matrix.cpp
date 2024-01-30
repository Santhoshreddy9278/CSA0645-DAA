#include <stdio.h>

void strassen(int A[2][2], int B[2][2], int C[2][2]) {
  int p1, p2, p3, p4, p5, p6, p7;

  p1 = A[0][0] * B[0][0];
  p2 = A[1][0] * B[0][1];
  p3 = A[0][0] * B[1][0];
  p4 = A[1][0] * B[1][1];
  p5 = (A[0][0] + A[1][1]) * (B[0][0] + B[1][1]);
  p6 = (A[0][1] - A[1][1]) * (B[0][0] + B[0][1]);
  p7 = (A[0][0] - A[0][1]) * (B[1][0] - B[1][1]);

  C[0][0] = p1 + p4 - p5 + p7;
  C[0][1] = p2 + p4;
  C[1][0] = p3 + p6;
  C[1][1] = p1 + p3 - p2 + p5;
}

void printMatrix(int A[2][2]) {
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("%d ", A[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int A[2][2] = {{1, 2}, {3, 4}};
  int B[2][2] = {{5, 6}, {7, 8}};
  int C[2][2];

  strassen(A, B, C);

  printf("Matrix A:\n");
  printMatrix(A);

  printf("Matrix B:\n");
  printMatrix(B);

  printf("Matrix C (A x B):\n");
  printMatrix(C);

  return 0;
}
