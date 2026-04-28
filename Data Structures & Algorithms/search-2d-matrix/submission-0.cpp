class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int m = matrix.size();
        int n = matrix[0].size();

        int beg = 0;
        int end = (m*n)-1;

        while(beg<=end)
        {
            int mid = (beg+end)/2;

            int row = mid / n;
            int col = mid % n;

            if(matrix[row][col]==target)
            {
                return true;
            }
            else if(matrix[row][col]>target)
            {
                end = mid-1;
            }
            else
            {
                beg = mid+1;
            }
        }

        return false;
        
    }
};
