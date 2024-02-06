void reverseSubstring(char* s, int start, int end) {
    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}
char* reverseWords(char* s) {
    int length = strlen(s);
    int start = 0;

    for (int i = 0; i <= length; i++) {
        if (s[i] == ' ' || s[i] == '\0') {
            reverseSubstring(s, start, i - 1);
            start = i + 1;
        }
    }

    return s;
}