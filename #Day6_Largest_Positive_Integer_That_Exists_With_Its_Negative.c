int findMaxK(int* nums, int numsSize) {
    int result = -1;
    for (int i = 0; i < numsSize; i++) {
        int num = nums[i];
        for (int j = 0; j < numsSize; j++) {
            if (i != j && num == -nums[j]) {
                
                if (num > result) {
                    result = num;
                }
            }
        }
    }
    return result;
}