// Last updated: 10/6/2025, 8:18:45 AM
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int index = 0;
        int mx = 0;
        for(int i = 0; i < m; i++){
            int count = 0;
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 1){
                    count++;
                }
            }
            if(count > mx){
                mx = count;
                index = i;
            }
        }
        return {index, mx};
    }
};