class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    

    int lptr;
    int rptr = numbers.size() - 1;

    for (int i = 0; i < numbers.size(); i++)
    {
        // need to keep track of current sum

        int currSum = numbers[lptr] + numbers[rptr];

        // if pointer values > current sum, decrement the right pointer

        if (currSum > target) {rptr--;}

        // if pointer values < current sum, increase the left pointer

        else if (currSum < target) {lptr++;}

   // since theres always a solution then we can just have a == condition
        else if (currSum == target) {return {lptr + 1, rptr + 1};}

        else {return {};}


    }
    }
};
