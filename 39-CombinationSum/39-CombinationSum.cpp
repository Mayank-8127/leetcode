// Last updated: 10/12/2025, 5:12:33 PM
void check(vector<vector<int>>& ans, vector<int>& arr, int& k, int sum, int i, vector<int>& v){
    if(sum >= k || i == arr.size()){
        if(sum == k){
            ans.push_back(v);
        }
        return;
    }

    v.push_back(arr[i]);
    check(ans, arr, k, sum+arr[i], i, v);

    v.pop_back();

    check(ans, arr, k, sum, i+1, v);
    
    return;
    
}

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int sum = 0;
        vector<int> v;
        vector<vector<int>> ans;
        check(ans, candidates, target, sum, 0, v);
        return ans;
    }
};