#include <stdbool.h>
#include <string.h>

bool isIsomorphic(char* s, char* t) {
    int s_len = strlen(s);
    int t_len = strlen(t);
    if (s_len != t_len)
        return false;

    char s_map[256] = {0}; 
    char t_map[256] = {0}; 

    for (int i = 0; i < s_len; ++i) {
        if (s_map[s[i]] != 0) {
            if (s_map[s[i]] != t[i])
                return false;
        } else {
            
            s_map[s[i]] = t[i];
        }

        if (t_map[t[i]] != 0) {
            if (t_map[t[i]] != s[i])
                return false;
        } else {
            
            t_map[t[i]] = s[i];
        }
    }
    return true;
}
