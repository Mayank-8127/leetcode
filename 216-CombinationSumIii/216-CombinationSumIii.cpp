// Last updated: 10/13/2025, 4:12:34 PM
void generate(int i, int sum, int& n, int& cnt, int& k, vector<int> v, vector<vector<int>>& ans, vector<int>& nums){
    if(i == n || v.size() >= cnt || sum >= k){
        if(sum == k && v.size() == cnt){
            ans.push_back(v);
        }
        return;
    }
    v.push_back(nums[i]);
    generate(i+1, sum + nums[i], n, cnt, k, v, ans, nums);
    v.pop_back();
    generate(i+1, sum, n, cnt, k, v, ans, nums);
    return;
}

class Solution {
public:
    vector<vector<int>> combinationSum3(int cnt, int k) {
        vector<int> nums = {1,2,3,4,5,6,7,8,9};
        vector<int> v;
        vector<vector<int>> ans;
        int n = 9;
        generate(0, 0, n, cnt, k, v, ans, nums);
        return ans;
    }
};