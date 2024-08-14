class Solution {

public:
    bool checkInclusion(std::string s1, std::string s2) {
        vector<int> s1_count(26, 0); // keep track of most common chars
        vector<int> s2_count(26, 0); 
        int lptr = 0;
        int windowSize = s1.length();
        
        // get count vector of s1
        for (int i = 0; i < windowSize; ++i) {
            s1_count[s1[i] - 'a']++;
        }

        // get count vector of s2
        for (int i = 0; i < windowSize && i < s2.length(); ++i) {
            s2_count[s2[i] - 'a']++;
        }

        // using rptr we can slide the window
        for (int rptr = windowSize; rptr <= s2.length(); ++rptr) {

            // check if current window matches s1_count
            if (s1_count == s2_count) {
                return true;
            }

            // slide the window otherwise
            if (rptr < s2.length()) {
                s2_count[s2[rptr] - 'a']++;
                s2_count[s2[lptr] - 'a']--;
                lptr++;
            }

        }

        // if we go through the for loop and have no matches, then we return false
        return false;
    }
};
