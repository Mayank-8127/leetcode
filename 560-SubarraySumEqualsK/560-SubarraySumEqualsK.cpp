// Last updated: 8/19/2025, 8:38:50 PM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> values;
        values[0] = 1;
        int sum = 0, count = 0, n = nums.size();
        for(int i = 0; i < n; i++){
            sum += nums[i];
            count += values[sum - k];
            values[sum]++;
        }

        return count;
    }
};