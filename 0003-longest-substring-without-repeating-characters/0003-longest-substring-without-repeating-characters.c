#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int freq[256] = {0};   // frequency of characters
    int left = 0, right = 0;
    int maxLen = 0;
    int n = strlen(s);

    while (right < n) {
        freq[s[right]]++;

        // if duplicate found, shrink window
        while (freq[s[right]] > 1) {
            freq[s[left]]--;
            left++;
        }

        // update max length
        int currLen = right - left + 1;
        if (currLen > maxLen)
            maxLen = currLen;

        right++;
    }

    return maxLen;
}