#include <algorithm>
#include <vector>

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int minRate = 1;
        int maxRate = *std::max_element(piles.begin(), piles.end());
        
        // Binary search directly on the range, no need for number list or pointers 
        while (minRate < maxRate) {
            int middle = minRate + (maxRate - minRate) / 2;
            int totalTime = 0;
            
            for (int pile : piles) {
                totalTime += (pile + middle - 1) / middle; // Ceiling div
            }
            
            if (totalTime <= h) {
                maxRate = middle;
            } else {
                minRate = middle + 1;
            }
        }
        
        return minRate;
    }
};