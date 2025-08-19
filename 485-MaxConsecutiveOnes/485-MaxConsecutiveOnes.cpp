// Last updated: 8/19/2025, 8:38:51 PM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        // int max = 0;
        // for(int i = 0, j = nums.size(); i < j; i++){
        //     int count = 0;
        //     while(nums[i] == 1){
        //         count++;
        //         i++;
        //         if(i == j){
        //             break;
        //         }
        //     }
        //     if(count > max){
        //         max = count;
        //     }
        // }
        // return max;

















    int max = 0;
    int j = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 1){
            j++;
            if(j > max){
                max = j;
            }
        }else{
            j = 0;
        }
    }
    return max;

    }
};