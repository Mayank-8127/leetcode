// Last updated: 10/6/2025, 10:14:28 AM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size() - 1;
        int n = matrix[0].size() - 1;
        int i = n;
        int j = 0;
        while(i >= 0 && j <= m){
            if(matrix[j][i] > target){
                i--;
            }else if(matrix[j][i] < target){
                j++;
            }else{
                return true;
            }
        }
        return false;
    }
};