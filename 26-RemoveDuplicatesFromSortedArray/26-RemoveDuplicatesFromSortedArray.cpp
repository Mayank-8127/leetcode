// Last updated: 8/19/2025, 8:39:18 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // ios_base::sync_with_stdio(false);
        int k = nums.size();
        int p1 = 0;
        for(int i = 0; i < k; i++){
            if(nums[p1] != nums[i]){
                p1++;
                nums[p1] = nums[i];
            }
        }
        return p1+1;

















        // int count = 1;
        // int n = nums.size();
        // for(int i = 1; i < n; i++){
        //     if(nums[i] == nums[i-1]){
        //         nums.erase(nums.begin() + i - 1);
        //         n--;
        //         i--;
        //     }else{
        //         count++;
        //     }
        // }
        // return count;
    }
};