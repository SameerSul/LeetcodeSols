class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        diff_str_count = defaultdict(list) # when we try to access a key that doesn't exist in defaultdict, it instead creates the key and associates it with an empty list
        for i in strs:
            count = [0]*26
            for j in i:
                count[ord(j) - ord("a")] += 1 # similar to c++ how we used countvector, this is our key
        # for each word we need to append that to the array
            diff_str_count[tuple(count)].append(i) # assign key to that value which they can use to then be returned in groups

        return diff_str_count.values() # similar keys are kept together
            




