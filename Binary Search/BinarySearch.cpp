class Solution {
public:
    int search(vector<int>& nums, int target) {
        //must incorporate binary search algorithm

        int lptr = 0;
        int n = nums.size() - 1;
        int rptr = n;
        int middle = (lptr + rptr) / 2;

        while (lptr <= rptr) // while binary search is in order
        {
            
            int middle = (lptr + rptr) / 2; // define middle as it is constantly changing

            // if target less than current number

            if (nums[middle] < target)
            {
               lptr = middle + 1;
            }


            // if target more than current number
            else if (nums[middle] > target)
            
            {
                rptr = middle - 1;
            }

            else if (nums[middle] == target)
            {
                return middle;
            }

        }        
    return -1;
    }
};
