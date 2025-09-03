// Last updated: 9/3/2025, 11:09:32 PM
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s = 0, e = nums.size() - 1, m;
        while(s <= e){
            m = (s+e)/2;
            if((s == m && m == e) || (nums[m-1] != nums[m] && nums[m] != nums[m+1])){
                return nums[m];
            }
            else if(((m-s+1)%2 == 0 && nums[m-1] == nums[m]) || ((m-s+1)%2 != 0 && nums[m] != nums[m-1])){
                if((m-s+1)%2 == 0){
                    s = m + 1;
                }else{
                    s = m;
                }
            }else{
                if((e-m+1)%2 == 0){
                    e = m - 1;
                }else{
                    e = m;
                }
            }
        }
        return 0;
    }
};