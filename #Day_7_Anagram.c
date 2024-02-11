bool isAnagram(char a[], char b[]) {
    int char_count[26] = {0}; 
    if (strlen(a) != strlen(b)) {
        return false;
    }
    for (int i = 0; a[i] != '\0'; i++) {
        char_count[a[i] - 'a']++;
    }
    for (int i = 0; b[i] != '\0'; i++) {
        char_count[b[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (char_count[i] != 0) {
            return false;
        }
    }

    return true;
}
