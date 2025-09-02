// Last updated: 9/3/2025, 1:58:58 AM
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1, m;
        while(s <= e){
            m = (s+e)/2;
            if(nums[m] == target){
                return true;
            }
            if(nums[s] == nums[m] && nums[m] == nums[e]){
                e--;
                s++;
            }
            else if(nums[s] <= nums[m]){
                if(nums[s] <= target && target <= nums[m]){
                    e = m-1;
                }else{
                    s = m+1;
                }
            }
            else{
                if(nums[m] <= target && target <= nums[e]){
                    s = m+1;
                }else{
                    e = m-1;
                }
            }
        }
        return false;
    }
};