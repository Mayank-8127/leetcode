// Last updated: 8/19/2025, 8:38:52 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // ios_base::sync_with_stdio(false);
        // int j = 0;
        // int n = nums.size();
        // for(int i = 0; i < n; i++){
        //     if(nums[i] != 0){
        //         nums[j] = nums[i];
        //         j++;
        //     }
        // }
        // for(int i = j; j < n; j++){
        //     nums[j] = 0;
        // }

        int n = nums.size();
        int j = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                nums[j] = nums[i];
                j++;
            }
        }
        for(int i = j; i < nums.size(); i++){
            nums[i] = 0;
        }
    }
};