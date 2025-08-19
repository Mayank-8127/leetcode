// Last updated: 8/19/2025, 8:39:00 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        int size = nums.size();
        int v = 0;
        for(int i = 0; i < size; i++){
            v = v^nums[i];
        }
        return v;
    }
};