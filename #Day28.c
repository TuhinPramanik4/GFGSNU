int numIdenticalPairs(int* nums, int numsSize) {
    int count[101] = {0};  
    for (int i = 0; i < numsSize; i++) {
        count[nums[i]]++;
    }
    
    int goodPairs = 0;
    for (int i = 1; i <= 100; i++) {
        if (count[i] > 1) {
            goodPairs += count[i] * (count[i] - 1) / 2;
        }
    }

    return goodPairs;
}