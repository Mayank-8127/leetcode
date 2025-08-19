// Last updated: 8/19/2025, 8:38:28 PM
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int a = 0,b = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 9){
                a += nums[i];
            }
            else{
                b += nums[i];
            }
        }
        if(a == b){
            return false;
        }
        else{
            return true;
        }
    }
};