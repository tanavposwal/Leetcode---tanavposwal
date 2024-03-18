class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int col = matrix[0].size();

        int rowIdx = 0;
        int colIdx = col - 1;

        while(rowIdx < rows && colIdx >= 0){
            int val = matrix[rowIdx][colIdx];

            if(val == target){
                return true;
            }
            if(val < target){
                rowIdx++;
            }
            else colIdx--;
        }

        return false;
    }
};