// Last updated: 8/19/2025, 8:38:44 PM
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long left = 0;
        long long count = 0;
        long long total = 0;
        for (long long right = 0; right < nums.size(); right++){
            total += nums[right];
            while((right-left+1)*nums[right] - total > k){
                total -= nums[left];
                left++;
            }
            count = max(count, right - left + 1);
        }
        return count;
    }
};