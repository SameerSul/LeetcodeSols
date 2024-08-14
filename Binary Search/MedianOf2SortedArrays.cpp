class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Merge the two sorted arrays, only using the second half of merge sort, then we calculate the median of that
        vector<double> merged = mergeSortedArrays(nums1, nums2);
        
        // find median using binary search
        int lptr = 0;
        int rptr = merged.size() - 1;

        int middle = (lptr + rptr) / 2;

        if ((merged.size()) % 2 == 0) 
        {
            return ((merged[middle] + merged[middle+1])/2);
        }

        else 
        {
            return (merged[middle]);
        }


        return 0.0; // Placeholder return
    }

private:
    vector<double> mergeSortedArrays(const vector<int>& nums1, const vector<int>& nums2) {
        vector<double> result;
        int i = 0, j = 0; // condition to ensure we push correct amount fo elements

        // Merge elements from both arrays in sorted order
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] <= nums2[j]) { // nums2 larger so push nums1
                result.push_back(nums1[i++]);
            } else {
                result.push_back(nums2[j++]);
            }
        }

        // Add remaining elements from nums1, if any
        while (i < nums1.size()) {
            result.push_back(nums1[i++]);
        }

        // Add remaining elements from nums2, if any
        while (j < nums2.size()) {
            result.push_back(nums2[j++]);
        }

        return result;
    }
};