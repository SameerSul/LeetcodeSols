class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // so my idea is to iterate over each submatrix, check the beginning and end elements so we can implement binary search
        // if the number falls between those elements, then we can run a binary search inside that submatrix
        // searching for 

        // nvm looks like we need a binary search for the rows too, so we'll need a middle row term too in addition to middle index

        int leftRow = 0;
        int rightRow = matrix.size() - 1;
        int n = matrix.size() - 1;

        // cant declare lptr and rptr here as we have to reset it for each searching iteration, maybe recursion is better here
        
        while (leftRow <= rightRow) // while binary search is in order for rows
        {
            middle = (leftRow + rightRow) / 2

            // check if lesser

            if matrix[middle][n]


        }
    }
};
