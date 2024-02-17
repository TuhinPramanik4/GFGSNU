int getMinDistance(int* nums, int numsSize, int target, int start) {
    int minDistance = INT_MAX;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) {
            int currentDistance = abs(i - start);
            minDistance = (currentDistance < minDistance) ? currentDistance :minDistance;
        }
    }

    return minDistance;
}