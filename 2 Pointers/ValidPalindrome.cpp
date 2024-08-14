using namespace std;

class Solution {
public:
    // Need to fix for numeric characters
    // Perhaps have a function that checks for alphanumerical?

    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        if (s.size() == 2) {
            if (((!isalnum(s[left])) && isalnum(s[right])) || (!isalnum(s[right]) && isalnum(s[left]))) {
                return true;
            } else if ((!isalnum(s[left]) && !isalnum(s[right])) || (tolower(s[left]) == tolower(s[right]))) {
                return true;
            }
            return false;
        }

        while (left < right) {
            // Move left pointer to the next valid character
            while (left < right && !isalnum(s[left])) {
                left++;
            }

            // Move right pointer to the previous valid character
            while (left < right && !isalnum(s[right])) {
                right--;
            }

            // Convert both characters to lowercase and compare
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            // Move both pointers inward
            left++;
            right--;
        }

        return true;
    }
};
