// Last updated: 8/19/2025, 8:52:54 PM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // map<int,int> values;
        // values[0] = 1;
        // int sum = 0, count = 0, n = nums.size();
        // for(int i = 0; i < n; i++){
        //     sum += nums[i];
        //     count += values[sum - k];
        //     values[sum]++;
        // }

        // return count;
























        int c = 0;
        int n = nums.size();
        int sum = 0;
        map<int,int> presum;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            if(sum == k){
                c++;
            }
            if(presum.find(sum-k) != presum.end()){
                c += presum[sum-k];
            }
            presum[sum]++;
        }
        return c;
    }
};