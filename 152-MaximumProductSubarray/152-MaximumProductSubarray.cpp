// Last updated: 8/28/2025, 2:37:56 AM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int mx = -1000000;
        int pre = 1, suff = 1;
        for(int i = 0; i < n; i++){
            if(pre == 0) pre = 1;
            if(suff == 0) suff = 1;
            pre = pre*nums[i];
            suff = suff*nums[n-i-1];
            mx = max(mx, max(pre, suff));
        }
        return mx;
    }
};