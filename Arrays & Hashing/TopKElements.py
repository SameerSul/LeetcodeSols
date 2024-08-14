class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        # could make a hashmap and return the most frequently occuring element(s)
        most_frequent_nums = {}
        frequency = [[] for i in range(len(nums)+ 1)]
        # this should only be O(n) complexity
        for num in nums:
            most_frequent_nums[num] = most_frequent_nums.get(num, 0) + 1 # add count to hashtable, return 0 and make one if not there

        # now sort array and then return
        
        for num, count in most_frequent_nums.items(): # for all key-value pairs in our dictionary
            frequency[count].append(num) #use each index to represent the count of each

        final_ans = []

        for i in range(len(frequency) - 1, 0,-1): # go in descending order because we sorted in ascending order
            for n in frequency[i]: #remember that each index has multiple numbers
                final_ans.append(n)
            if len(final_ans) == k:
                return final_ans
        
        