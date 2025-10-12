// Last updated: 10/12/2025, 6:07:35 PM
void check(vector<vector<int>>& ans, vector<int>& arr, int& k, int sum, int i, vector<int>& v){
    if(sum >= k || i == arr.size()){
        if(sum == k){
            int flag = 1;
            for(int j = 0; j < ans.size(); j++){
                if(ans[j] == v){
                    flag = 0;
                    break;
                }
            }
            if(flag) ans.push_back(v);
        }
        return;
    }

    v.push_back(arr[i]);
    check(ans, arr, k, sum+arr[i], i+1, v);

    v.pop_back();
    while(i < arr.size() - 1 && arr[i] == arr[i+1]){
        i++;
    }
    check(ans, arr, k, sum, i+1, v);
    
    return;
    
}

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        int sum = 0;
        vector<int> v;
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        check(ans, arr, target, sum, 0, v);
        return ans;
    }
};