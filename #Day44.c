char* addBinary(char s[], char a[]) {
    int n = strlen(s);
    int m = strlen(a);
    char b[100001]; 
    int carry = 0;
    int i = 0, j = 0;

    while (i < n || i < m || carry != 0) {
        int x = (i < n && s[n - 1 - i] == '1') ? 1 : 0;
        int y = (i < m && a[m - 1 - i] == '1') ? 1 : 0;
        b[j++] = ((x + y + carry) % 2) + '0'; 
        carry = (x + y + carry) / 2;
        i++;
    }
    for (int left = 0, right = j - 1; left < right; left++, right--) {
        char temp = b[left];
        b[left] = b[right];
        b[right] = temp;
    }

    b[j] = '\0';

    char* result = strdup(b);

    return result;
}