int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry = 1; // Start with a carry of 1

    for (int i = digitsSize - 1; i >= 0 && carry > 0; i--) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10;
        carry = sum / 10;
    }
    if (carry > 0) {
        (*returnSize) = digitsSize + 1;
        int* result = (int*)malloc((*returnSize) * sizeof(int));
        result[0] = carry;
        for (int i = 0; i < digitsSize; i++) {
            result[i + 1] = digits[i];
        }

        return result;
    } else {
        
        (*returnSize) = digitsSize;
        return digits;
    }
}