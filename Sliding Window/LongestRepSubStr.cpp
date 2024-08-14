



class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26, 0); // our hashmap equivalent to keep track of the most common char
        int maxCount = 0;
        int maxSize = 0;
        int lptr = 0;

        for (int rptr = 0; rptr < s.length(); rptr++) {
            // Increment the count for the current character
            count[s[rptr] - 'A']++;
            
            // Update maxCount if and when necessary
            maxCount = max(maxCount, count[s[rptr] - 'A']);

            // If the window is invalid, shrink it from the left and remove the corresponding letter
            while (rptr - lptr + 1 - maxCount > k) { // remember we can only do k substitutions windowLen - count[mostFreqChar]
                count[s[lptr] - 'A']--;
                lptr++;
            }

            // Update maxSize
            maxSize = max(maxSize, rptr - lptr + 1);
        }

        return maxSize;
    }
};











