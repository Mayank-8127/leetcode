// Last updated: 9/2/2025, 8:01:38 PM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s = 0, e = nums.size() - 1;
        int m;
        int first = e+1;
        while(s <= e){
            m = (s+e)/2;
            if(target > nums[m]){
                s = m+1;
            }else{
                e = m-1;
                first = m;
            }
        }
        
        if(first == nums.size() || nums[first] != target){
            return {-1,-1};
        }
        
        s = 0;
        e = nums.size() - 1;
        int last = e+1;
        while(s <= e){
            m = (s+e)/2;
            if(target >= nums[m]){
                s = m+1;
            }else{
                e = m-1;
                last = m;
            }
        }
        return {first, last - 1};
    }
};