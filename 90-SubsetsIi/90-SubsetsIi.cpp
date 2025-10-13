// Last updated: 10/13/2025, 3:50:29 PM
void generate(int i, int n, vector<vector<int>>& ans, vector<int> nums, vector<int> v){
    if(i == n){
        ans.push_back(v);
        return;
    }
    v.push_back(nums[i]);
    generate(i+1, n, ans, nums, v);
    v.pop_back();
    while(i < n-1 && nums[i] == nums[i+1]){
        i++;
    }
    generate(i+1, n, ans, nums, v);
    return;
}

class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> v;
        generate(0, nums.size(), ans, nums, v);
        return ans;
    }
};