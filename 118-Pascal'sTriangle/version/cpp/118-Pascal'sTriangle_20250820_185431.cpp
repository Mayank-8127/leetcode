// Last updated: 8/20/2025, 6:54:31 PM
// This solution uses two for loops, the outer loop iterates for rows and the inner loop iterates for values in that row and then it simply just calculates the values for the elements based on whether they lie on the edge or based on the values of previous row.
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