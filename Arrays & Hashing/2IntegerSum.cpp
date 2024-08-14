using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        for (int i = 0; i < nums.size(); i++) // for every value in array
            for (int j = i + 1; j < nums.size(); j++) // for every increasing value
                if (nums[i] + nums[j] == target)
                { 
                    return {i,j};
                }
    return {};
    }
};