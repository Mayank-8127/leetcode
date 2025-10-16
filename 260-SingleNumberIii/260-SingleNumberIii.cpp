// Last updated: 10/17/2025, 2:26:11 AM
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xorab = 0;
        for(long long i = 0; i < nums.size(); i++) xorab ^= nums[i];

        long long setbit = (xorab & (xorab - 1)) ^ xorab;

        int a = 0;
        for(long long i = 0; i < nums.size(); i++){
            if(nums[i] & setbit) a ^= nums[i];
        }
        int b = xorab^a;
        vector<int> ans = {a, b};
        return ans;
    }
};