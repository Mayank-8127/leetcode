// Last updated: 8/19/2025, 8:38:46 PM
class Solution {
public:
    bool check(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        int a = nums[0];
        int flag = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] > nums[i+1]){
                flag++;
                if(flag > 1){
                    return false;
                }
            }
            if(flag && nums[i+1] > a){
                return false;
            }
        }
        return true;



    // int n = nums.size();
    // int flag = 0;
    // bool ans = true;
    // for(int i = 1; i < n; i++){
    //     if(nums[i-1] > nums[i] && flag == 0){
    //         flag = 1;
    //     }
    //     else if(nums[i-1] > nums[i] && flag == 1){
    //         ans = false;
    //         break;
    //     }else if(nums[i-1] < nums[i]-1){
    //         ans = false;
    //         break;
    //     }
    // }
    // return ans;




    }
};