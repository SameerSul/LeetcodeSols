class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // so since its supposed to be n^2, we'll have 2 for loops for sure, one of which will choose the first value
        // the other for loop will be choosing 2 values, the first for loop will iterate the first value
        // for the second for loop we'll have our 2 pointers
        set<vector<int>> returnValues;

        for (int i = 0; i < nums.size(); i++)
        {
            // for each other combination that can be made with this number
            for (int j = 0; j < nums.size(); j++)
            {
                if (j == i)
                {
                    continue; // this is because j = i and we can't add duplicates
                }
                
                int k = nums.size() - 1; 
                {
                    // we need to go over all values of k before this j loop ends
                    while (k > j)
                    {
                        if (k == i)
                        {
                            k--;
                            continue;
                        }
                        if (nums[i] + nums[j] + nums[k] == 0)
                        {
                            vector<int> returnVal = {nums[i], nums[j], nums[k]};
                            sort(returnVal.begin(), returnVal.end()); // Sort the triplet to ensure uniqueness in set
                            returnValues.insert(returnVal);
                        }
                        k--;
                    }
                }
            }
        }
        // Convert set to vector
        vector<vector<int>> result(returnValues.begin(), returnValues.end());
        return result;
    }
};