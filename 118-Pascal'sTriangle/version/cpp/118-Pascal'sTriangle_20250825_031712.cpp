// Last updated: 8/25/2025, 3:17:12 AM
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // vector<vector<int>> arr;
        // for(int i = 0; i < numRows; i++){
        //     vector<int> temp;
        //     for(int j = 0; j <= i; j++){
        //         if(j == 0 || j == i){
        //             temp.push_back(1);
        //         }
        //         else{
        //             temp.push_back(arr[i-1][j-1] + arr[i-1][j]);
        //         }
        //     }
        //     arr.push_back(temp);
        // }
        // return arr;
























        vector<vector<int>> v;
        for(int i = 0; i < numRows; i++){
            vector<int> row;
            for(int j = 0; j <= i; j++){
                if(j == 0 || j == i){
                    row.push_back(1);
                }else{
                    row.push_back(v[i-1][j-1] + v[i-1][j]);
                }
            }
            v.push_back(row);
        }
        return v;
    }
};