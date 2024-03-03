int romanToInt(char *s) {
    int result = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        switch (s[i]) {
            case 'I':
                if (s[i + 1] == 'V' || s[i + 1] == 'X') {
                    result -= 1;
                } else {
                    result += 1;
                }
                break;
            case 'V':
                if (s[i + 1] == 'X' || s[i + 1] == 'L') {
                    result -= 5;
                } else {
                    result += 5;
                }
                break;
            case 'X':
                if (s[i + 1] == 'L' || s[i + 1] == 'C') {
                    result -= 10;
                } else {
                    result += 10;
                }
                break;
            case 'L':
                if (s[i + 1] == 'C' || s[i + 1] == 'D') {
                    result -= 50;
                } else {
                    result += 50;
                }
                break;
            case 'C':
                if (s[i + 1] == 'D' || s[i + 1] == 'M') {
                    result -= 100;
                } else {
                    result += 100;
                }
                break;
            case 'D':
                if (s[i + 1] == 'M') {
                    result -= 500;
                } else {
                    result += 500;
                }
                break;
            case 'M':
                result += 1000;
                break;
            default:
                break;
        }
    }

    return result;
}
