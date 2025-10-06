// Last updated: 10/6/2025, 8:51:38 AM
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size() - 1;
        int n = matrix[0].size() - 1;
        int s1 = 0, e1 = m, m1, m2, s2 = 0, e2 = n;
        while(s1 <= e1){
            m1 = (s1+e1)/2;
            if(matrix[m1][0] > target){
                e1 = m1 - 1;
            }else if(matrix[m1][0] < target){
                s1 = m1 + 1;
            }
            else{
                return true;
            }
        }
        if(e1 == -1){
            return false;
        }
        while(s2 <= e2){
            m2 = (s2+e2)/2;
            if(matrix[e1][m2] > target){
                e2 = m2 - 1;
            }else if(matrix[e1][m2] < target){
                s2 = m2 + 1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};