// Last updated: 9/3/2025, 11:32:40 PM
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int s = 0, e = nums.size() - 1, m;

        while(s <= e){
            m = (s+e)/2;
            if(s == e){
                return s;
            }else if(nums[s] > nums[s+1]){
                return s;
            }else if(nums[e] > nums[e-1]){
                return e;
            }else if(nums[m] > nums[m-1] && nums[m] > nums[m+1]){
                return m;
            }else if(nums[m] < nums[m+1]){
                s = m+1;
            }else{
                e = m-1;
            }
        }
        return s;
    }
};