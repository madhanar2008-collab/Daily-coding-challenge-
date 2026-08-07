int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int last_index[256];       // ASCII characters (0–255)
    for (int i = 0; i < 256; i++) last_index[i] = -1;

    int left = 0, max_len = 0;

    for (int i = 0; i < n; i++) {
        char ch = s[i];

        // If character was seen and inside the current window
        if (last_index[(unsigned char)ch] >= left) {
            left = last_index[(unsigned char)ch] + 1;
        }

        // Update last seen index
        last_index[(unsigned char)ch] = i;

        // Update max length
        int curr_len = i - left + 1;
        if (curr_len > max_len) {
            max_len = curr_len;
        }
    }

    return max_len;
}