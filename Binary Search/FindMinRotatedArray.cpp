class Solution {
public:
    int findMin(vector<int>& nums) {
        int lptr = 0;
        int rptr = nums.size() - 1;
        
        // If the array is not rotated, return the first element
        if (nums[lptr] <= nums[rptr]) return nums[lptr];
        
        while (lptr < rptr) {
            int mid = lptr + (rptr - lptr) / 2;
            
            // If middle element is greater than its next element next element smallest
            if (nums[mid] > nums[mid + 1]) return nums[mid + 1];
            
            // If mid element is less than its previous element mid element is the smallest
            if (mid > 0 && nums[mid - 1] > nums[mid]) return nums[mid];
            
            // If the left half is sorted, the minimum is in the right half
            if (nums[lptr] <= nums[mid]) {
                lptr = mid + 1;
            } else {
                // Otherwise, the minimum is in the left half
                rptr = mid - 1;
            }
        }
        
        return nums[lptr];
    }
};