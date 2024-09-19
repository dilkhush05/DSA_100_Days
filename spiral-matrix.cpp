class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int row = matrix.size();
        if (row == 0) return ans; 
        int col = matrix[0].size();
        if (col == 0) return ans; 

        int count = 0;
        int total = row * col;

        int startinRow = 0;
        int startinCol = 0;
        int endingRow = row - 1;
        int endingCol = col - 1;

        while (count < total) {
            for (int i = startinCol; count < total && i <= endingCol; i++) {
                ans.push_back(matrix[startinRow][i]);
                count++;
            }
            startinRow++;

            for (int i = startinRow; count < total && i <= endingRow; i++) {
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;

            for (int i = endingCol; count < total && i >= startinCol; i--) {
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;

            for (int i = endingRow; count < total && i >= startinRow; i--) {
                ans.push_back(matrix[i][startinCol]);
                count++;
            }
            startinCol++;
        }

        return ans;
    }
};