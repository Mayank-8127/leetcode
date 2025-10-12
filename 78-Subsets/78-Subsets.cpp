// Last updated: 10/12/2025, 3:32:57 PM
void generate(vector<int> nums, vector<int> v, vector<vector<int>>& ans){
    if(v.size() == 0){
        return;
    }
}

void strr(string s, int n, vector<vector<int>>& ans, vector<int> nums){
    if(n == 0){
        vector<int> t;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                t.push_back(nums[i]);
            }
        }
        ans.push_back(t);
        return;
    }
    strr(s+'0', n-1, ans, nums);
    strr(s+'1', n-1, ans, nums);
    return;
}

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        string s = "";
        vector<vector<int>> ans;
        strr(s, nums.size(), ans, nums);
        return ans;
    }
};