// Last updated: 3/28/2026, 12:18:48 PM
class Solution {
public:
    int lessThanEqual(vector<int>& nums, int k){
        if(k<0) return 0;
        int ans = 0;
        int l = 0;
        int c = 0;
        for(int r = 0; r < nums.size(); r++){
            if(nums[r] % 2 == 1) c++;
            if(c <= k) ans += (r-l+1);
            while(l < nums.size() && c > k){
                if(nums[l] % 2 == 1) c--;
                l++;
                if(c <= k) ans += (r-l+1);
            }
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return lessThanEqual(nums, k) - lessThanEqual(nums, k-1);
    }
};