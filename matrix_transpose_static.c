#include "matrix_transpose_static.h"

matrix transpose(matrix m) {
	// new matrix object
  matrix transposed;
	// set new parameters: row = m1's col dimensions, col = m1's row dimensions
  transposed = create_empty(m.col_dim, m.row_dim);
  
	// simple nested for loop to grab the elements
  for (int i = 0; i < transposed.row_dim; i++) {
    for (int j = 0; j < transposed.col_dim; j++) {
      transposed.element[i][j] = m.element[j][i];
    }
  }

  return transposed;
}
