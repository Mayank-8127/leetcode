// Last updated: 8/19/2025, 8:38:34 PM
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int j = 0; j < k; j++){
            int index = 0;
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] < nums[index]){
                    index = i;
                }
            }
            nums[index] *= multiplier;
        }
        return nums;
    }
};