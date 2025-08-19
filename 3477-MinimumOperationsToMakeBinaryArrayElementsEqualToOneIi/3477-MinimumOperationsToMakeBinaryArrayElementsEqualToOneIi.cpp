// Last updated: 8/19/2025, 8:38:29 PM
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int y,count = 0, flag = 1;
        int x = nums.size();
        for(int i = 0; i < x; i++){
            if(nums[i] == 1){
                flag = 0;
                break;
            }
        }
        if(flag){
            return 1;
        }
        y = x - 1;
        if(nums[x - 1] == 0){
            for(int i = 0; i < x; i++){
                if(nums[i] == 1){
                    y = i;
                }
            }
            count++;
        }
        for(int i = 0; i <= y; i++){
            if(nums[i] == 0){
                while(nums[i] == 0){
                    i++;
                }
                count += 2;
            }
        }
        return count;
    }
};