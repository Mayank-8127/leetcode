// Last updated: 8/28/2025, 2:37:07 AM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        int m = (s+e)/2;
        while(m > s && m < e){
            if(target > nums[m]){
                s = m;
                m = (s+e)/2;
            }else if(target < nums[m]){
                e = m;
                m = (s+e)/2;
            }else{
                return m;
            }
        }
        if(nums[m] == target) return m;
        if(nums[e] == target) return e;
        return -1;
    }
};