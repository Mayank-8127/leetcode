// Last updated: 8/19/2025, 8:39:11 PM
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // int m = matrix.size();
        // int n = matrix[0].size();
        // int a = m;
        // int b = n;
        // int c = -1;
        // int d = 0;
        // int dir = 1;
        // int p = 0, q = -1;
        // vector<int> ans;
        // for(int i = 0; i < (m+1)*(n+1); i++){
        //     if(p < a && q < b && dir == 1){
        //         q++;
        //         if(q == b){
        //             q--;
        //             b--;
        //         }
        //         else{
        //             ans.push_back(matrix[p][q]);
        //         }
        //     }
        //     else if(p < a && q == b && dir == 1){
        //         p++;
        //         if(p == a){
        //             p--;
        //             a--;
        //             dir = 0;
        //         }else{
        //             ans.push_back(matrix[p][q]);
        //         }
        //     }
        //     else if(p > d && q > c && dir == 0){
        //         q--;
        //         if(q == c){
        //             q++;
        //             c++;
        //         }
        //         else{
        //             ans.push_back(matrix[p][q]);
        //         }
        //     }
        //     else if(p > d && q == c && dir == 0){
        //         p--;
        //         if(p == d){
        //             p++;
        //             d++;
        //             dir = 1;
        //         }else{
        //             ans.push_back(matrix[p][q]);
        //         }
        //     }
        //     else{
        //     }
        //     if(ans.size() == m*n){
        //         break;
        //     }
        // }
        // return ans;


        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0, bottom = n-1;
        int left = 0, right = m-1;
        vector<int> ans;
        while(left <= right && top <= bottom){
            for(int i = left; i <= right; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i = top; i <= bottom; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            if(top <= bottom){
                for(int i = right; i >= left; i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left <= right){
                for(int i = bottom; i >= top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};