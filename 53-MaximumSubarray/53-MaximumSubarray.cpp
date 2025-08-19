// Last updated: 8/19/2025, 8:39:13 PM
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        // int size = nums.size();
        // int sum = 0, max = -1000000;
        // for(int i = 0; i < size; i++){
        //     sum += nums[i];
        //     if(sum > max){
        //         max = sum;
        //     }
        //     if(sum < 0){
        //         sum = 0;
        //     }
        // }
        // return max;


        int n = nums.size();
        int max = -10000000;
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            if(sum > max){
                max = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }
        return max;
    }

};