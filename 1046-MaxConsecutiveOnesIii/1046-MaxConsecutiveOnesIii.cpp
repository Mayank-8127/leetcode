// Last updated: 2/22/2026, 8:54:55 PM
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int l = 0, r = 0;
        int zeroes = 0;
        int size = nums.size();
        int ans = 0;
        while(r < size){
            if(nums[r] == 0 && zeroes < k){
                r++;
                zeroes++;
            }
            else if(nums[r] == 1) r++;
            else {
                while(l < size && nums[l] != 0){
                    l++;
                }
                l++;
                zeroes--;
            }
            ans = max(ans, r-l);
        }
        return ans;
    }
};