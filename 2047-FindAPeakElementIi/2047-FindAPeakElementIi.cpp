// Last updated: 10/7/2025, 4:23:39 PM
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int start = 0, mid, end = m-1;
        while(start <= end){
            mid = (start+end)/2;
            int index = 0, mx = 0;
            for(int i = 0; i < n; i++){
                if(mat[mid][i] > mx){
                    index = i;
                    mx = mat[mid][i];
                }
            }
            int flag = 0;
            if(mid > 0 && mat[mid][index] < mat[mid-1][index]){
                flag = 1;
            }
            if(mid < m-1 && mat[mid][index] < mat[mid+1][index]){
                flag = 2;
            }
            if(flag == 0){
                return {mid, index};
            }
            else if(flag == 1){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
        return {};
    }
};