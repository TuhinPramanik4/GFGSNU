int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *result = (int*)malloc(nums1Size * sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < nums1Size; i++) {
        int duplicate = 0;
        for (int k = 0; k < *returnSize; k++) {
            if (result[k] == nums1[i]) {
                duplicate = 1;
                break;
            }
        }
        if (duplicate) continue;

        for (int j = 0; j < nums2Size; j++) {
            if (nums1[i] == nums2[j]) {
                result[*returnSize] = nums1[i];
                (*returnSize)++;
                break; 
            }
        }
    }
    return result;
}
