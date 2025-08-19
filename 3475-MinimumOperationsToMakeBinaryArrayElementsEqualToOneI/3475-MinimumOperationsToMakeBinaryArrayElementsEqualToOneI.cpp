// Last updated: 8/19/2025, 8:38:37 PM
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;
        for(int i = 0, a = nums.size() - 2; i < a; i++){
            if(nums[i] == 0){
                nums[i] = 1;
                nums[i+1] = 1 - nums[i+1];
                nums[i+2] = 1 - nums[i+2];
                count++;
            }
        }
        for(int i = 0, a = nums.size(); i < a; i++){
            if(nums[i] == 0){
                return -1;
            }
        }
        return count;
    }
};