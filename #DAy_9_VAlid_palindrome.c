bool isPalindromeInRange(const char* s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}


bool validPalindrome(char* s) {
    int left = 0;
    int right = strlen(s) - 1;

    
    while (left < right) {
        if (s[left] != s[right]) {
            return isPalindromeInRange(s, left + 1, right) || isPalindromeInRange(s, left, right - 1);
        }
        left++;
        right--;
    }
    return true;
}