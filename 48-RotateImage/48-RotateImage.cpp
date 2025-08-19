// Last updated: 8/19/2025, 8:39:15 PM
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // int n = matrix.size();
        // int temp;
        // for(int i = 0; i < (n+1)/2; i++){
        //     for(int j = i; j < n-1-i; j++){
        //         temp = matrix[i][j];
        //         matrix[i][j] = matrix[n-1-j][i];
        //         matrix[n-1-j][i] = matrix[n-1-i][n-1-j];
        //         matrix[n-1-i][n-1-j] = matrix[j][n-1-i];
        //         matrix[j][n-1-i] = temp;
        //     }
        // }























        int n = matrix.size();
        int t;
        for(int i = 0; i <= n/2; i++){
            for(int j = i; j < n-1-i; j++ ){
                t = matrix[i][j];
                matrix[i][j] = matrix[n-j-1][i];
                matrix[n-j-1][i] = matrix[n-i-1][n-j-1];
                matrix[n-i-1][n-j-1] = matrix[j][n-i-1];
                matrix[j][n-i-1] = t;
            }
        }
    }
};