bool is_palindrome(char* s, int start, int end) {
    while(start < end) {
        if(s[start] != s[end])
            return false;
        start++;
        end--;
    }
    return true;
}

char* longestPalindrome(char* s) {
    int n = strlen(s);
    int max_len = 0;
    int start_index = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if(is_palindrome(s, i, j) && (j - i + 1) > max_len) {
                max_len = j - i + 1;
                start_index = i;
            }
        }
    }

    char* result = (char*)malloc((max_len + 1) * sizeof(char));
    strncpy(result, s + start_index, max_len);
    result[max_len] = '\0';  // null terminate the string
    return result;
}