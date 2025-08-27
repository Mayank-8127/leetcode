// Last updated: 8/28/2025, 3:02:42 AM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        int m = (s+e)/2;
        while(s <= e){
            if(target > nums[m]){
                s = m+1;
                m = (s+e)/2;
            }else if(target < nums[m]){
                e = m-1;
                m = (s+e)/2;
            }else{
                return m;
            }
        }
        return -1;
    }
};