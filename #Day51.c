#include <stdlib.h>
#include <stdio.h>

int* findErrorNums(int* nums, int numsSize, int* returnSize) {
   
    int *returnarray = (int*)malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        
        int index = abs(nums[i]) - 1;
        if (nums[index] < 0) {
            returnarray[0] = abs(nums[i]);
        } else {
            
            nums[index] = -nums[index];
        }
    }

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) {
            returnarray[1] = i + 1;
            break;
        }
    }
    *returnSize = 2;

    return returnarray;
}

int main() {
    int nums[] = {2, 2, 3, 4, 5};
    int returnSize;
    int *result = findErrorNums(nums, 5, &returnSize);
    printf("Duplicate: %d, Missing: %d\n", result[0], result[1]);
    free(result); 
    return 0;
}
