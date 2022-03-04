/* File: test_static.c */
#include "matrix_static.h"
#include "matrix_transpose_static.h"

int main() {
  static T data[] = {1,2,3,4};
  matrix  a,b, aAddB;
  a = create_initvals(2,2,data);
  b = create_empty(2,2);
  aAddB = add(a,b);

  // Matrix A
  printf("\n Matrix a:");
  matrix_print(a);

  // A transposed
  printf("\n Transposed Matrix  a:");
  matrix transA = transpose (a);
  matrix_print(transA);

  equate(&a,&b);
  
  // Matrix B
  printf("\n Matrix b:");
  matrix_print(b);
  
  // B transposed
  printf("\n Transposed Matrix  b:");
  matrix transB = transpose (b);
  matrix_print(transB);
  
  // A + B
  printf("\n a+b:");
  matrix_print(aAddB);
  
  // A + B transposed
  printf("\n Transposed a+b:");
  matrix transAPlusB = transpose (aAddB);
  matrix_print(transAPlusB);

  // More transposing matrixes
  static T extra[] = {4.33,65.12,12.931,99.1112,0.33,3.1456789,4.98,12};
  
  // Matrix C
  matrix c = create_initvals (4,2,extra); 
  printf("\n Matrix c:");
  matrix_print(c);
  
  // Transpose C
  printf("\n Transposed Matrix  c:");
  matrix transC = transpose(c);
  matrix_print(transC);

  return 0;
}

