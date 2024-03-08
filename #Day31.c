int lengthOfLastWord(char* s) {
    int count = 0;
    int a=0;

    for (int i = strlen(s)-1; i >= 0; i--) {
        if (s[i] == ' ' && a==1) {
            break;
        }
        else if(s[i]!=' '){
           count++;
           a=1;            
        }
    }
    return count;
}