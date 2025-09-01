// Last updated: 9/2/2025, 3:47:01 AM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        int m;
        int ans = e+1;
        while(s <= e){
            m = (s+e)/2;
            if(target > nums[m]){
                s = m+1;
            }else if(target < nums[m]){
                e = m-1;
                ans = m;
            }else{
                return m;
            }
        }
        return ans;
    }
};