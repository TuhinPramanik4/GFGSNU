#include <stdio.h>
#include <stdbool.h>

bool isSelfDividing(int num) {
    int originalNum = num;
    
    while (num > 0) {
        int digit = num % 10;
        if (digit == 0 || originalNum % digit != 0) {
            return false;
        }
        num /= 10;
    }
    
    return true;
}

int* selfDividingNumbers(int left, int right, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * (right - left + 1));
    *returnSize = 0;

    for (int num = left; num <= right; ++num) {
        if (isSelfDividing(num)) {
            result[(*returnSize)++] = num;
        }
    }

    return result;
}