// Last updated: 8/19/2025, 8:38:35 PM
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        int x;
        for(int i = 0, a = nums.size(); i < a; i++ ){
            x = nums[i] % 3;
            if(x == 1 || x == 2){
                count++;
            }
        }
        return count;
    }
};