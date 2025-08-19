// Last updated: 8/19/2025, 8:38:54 PM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        int size = nums.size();
        // int sum = 0;
        // int reqsum = (size*(size + 1))/2;
        // for(int i = 0; i < size; i++){
        //     sum += nums[i];
        // }
        // return reqsum - sum;
        int v = 0;
        int w = 0;
        for(int i = 0; i < size; i++){
            v = v^nums[i];
            w = w^(i+1);
        }
        return v^w;
    }
};