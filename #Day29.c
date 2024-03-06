#include <stdlib.h>

int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    *returnSize = numRows;

    int** result = (int**)malloc(numRows * sizeof(int*));

      *returnColumnSizes = (int*)malloc(numRows * sizeof(int));

          for (int i = 0; i < numRows; i++) {
        
                 result[i] = (int*)malloc((i + 1) * sizeof(int));
                      (*returnColumnSizes)[i] = i + 1;
                            int value = 1;
                              for (int j = 0; j <= i; j++) {
                                 result[i][j] = value;
                                   value = value * (i - j) / (j + 1);
                                }
                                }
return result;
}
