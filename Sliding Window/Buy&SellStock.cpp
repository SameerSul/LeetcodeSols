class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // this is a 2 pointers problem

        // one pointer is to buy the other pointer is to sell, we want to find the pointer combination with the largest +ive difference

        int lptr = 0; // buy pointer

        int rptr = 1; // sell pointer

        int maxProfit = 0;

        
        while (rptr < prices.size())
        {
         // obviously we dont want to sell at a price smaller than what we bought for, so we need to have a condition to move our pointers

            if (prices[lptr] > prices[rptr]) // while we have negative profit, remove the left pointer + progress
            {
                lptr = rptr;
                rptr++;
            }

            else // if price is positive OR 0 do this
            {
                // then we document the value max value, and iterate the right pointer
                maxProfit = max(maxProfit, prices[rptr] - prices[lptr]);
                rptr++;

            }

        }

        return (maxProfit);
    }
};
