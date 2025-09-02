// Last updated: 9/3/2025, 2:18:54 AM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0, e = nums.size() - 1, m;
        while(s <= e){
            m = (s+e)/2;
            if(nums[s] <= nums[m] && nums[m] <= nums[e]){
                return nums[s];
            }
            if(nums[s] < nums[m]){
                s = m;
            }
            else if(nums[s] == nums[m]){
                s++;
            }
            else{
                e = m;
            }
        }
        return 0;
    }
};