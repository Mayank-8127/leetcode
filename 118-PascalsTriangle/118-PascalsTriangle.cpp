// Last updated: 8/19/2025, 8:39:06 PM
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr;
        for(int i = 0; i < numRows; i++){
            vector<int> temp;
            for(int j = 0; j <= i; j++){
                if(j == 0 || j == i){
                    temp.push_back(1);
                }
                else{
                    temp.push_back(arr[i-1][j-1] + arr[i-1][j]);
                }
            }
            arr.push_back(temp);
        }
        return arr;
    }
};