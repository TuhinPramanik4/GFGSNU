int* leftRightDifference(int* nums, int numsSize, int* returnSize) {
    
    int *leftarr = (int*)malloc((numsSize + 1) * sizeof(int));
    int *rightarr = (int*)malloc((numsSize + 1) * sizeof(int)); 
    int *resultarr = (int*)malloc(numsSize * sizeof(int));
    
   
    leftarr[0] = 0;
    leftarr[1] = nums[0];
    rightarr[numsSize] = 0;
    rightarr[numsSize - 1] = nums[numsSize - 1];

    for(int i = 2; i <= numsSize; i++) { 
        leftarr[i] = leftarr[i - 1] + nums[i - 1];
    }
    for(int i = numsSize - 2; i >= 0; i--) {
        rightarr[i] = rightarr[i + 1] + nums[i];
    }
    for(int i = 0; i < numsSize; i++) {
        resultarr[i] = abs(leftarr[i] - rightarr[i+1]); 
    }
    *returnSize = numsSize;
    free(leftarr);
    free(rightarr);
    
    return resultarr;
}
