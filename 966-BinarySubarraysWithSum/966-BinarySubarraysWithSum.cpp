// Last updated: 3/28/2026, 12:18:51 PM
class Solution {
public:
    int lessThanEqual(vector<int>& nums, int goal){
        if(goal<0) return 0;
        int ans = 0;
        int l = 0;
        int sum = 0;
        for(int r = 0; r < nums.size(); r++){
            sum += nums[r];
            if(sum <= goal) ans += (r-l+1);
            while(l < nums.size() && sum > goal){
                sum -= nums[l];
                l++;
                if(sum <= goal) ans += (r-l+1);
            }
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return lessThanEqual(nums, goal) - lessThanEqual(nums, goal-1);
    }
};