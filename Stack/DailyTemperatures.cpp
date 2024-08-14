class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) 
    {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        stack<pair<int, int>> st;

        for (int i = n - 1; i >= 0; i--)
        {
            while (!st.empty() && st.top().first <= temperatures[i]) //while there are smaller elements in the stack (right side of array, keep popping)
            {
                st.pop();
            }

            if (!st.empty()) // if stack is not empty then that means we've found a larger element
            {
                ans[i] = st.top().second - i;
            }

            st.push({temperatures[i], i}); // no need to check if it is empty, then push this value to the stack
        }

        return ans;
    }
};