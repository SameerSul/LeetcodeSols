class Solution(object):
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        
        # could sort the array to make it easier, similar approach to that one LC question w/ count hashmaps

        # can take one array to make an example vector and then use that to compare the others

        count1 = {}

        res = []

        # initialize count1
        for i in range(len(nums1)):
            count1[nums1[i]] = 1 + count1.get(nums1[i], 0)
        
        for j in range(len(nums2)):
            if nums2[j] in count1 and count1[nums2[j]]:
                res.append(nums2[j])
                count1[nums2[j]] -= 1
                # need to remove the number so its not repeated
                
        return res
