// Last updated: 8/19/2025, 8:39:16 PM
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        cin.tie(0);cout.tie(0);
        // int size = nums.size(), index = -1;
        // for(int i = size - 2; i >= 0; i--){
        //     if(nums[i] < nums[i+1]){
        //         index = i;
        //         break;
        //     }
        // }
        // if(index == -1){
        //     reverse(nums.begin(), nums.end());
        //     return;
        // }
        // for(int i = size - 1; i > index; i--){
        //     if(nums[i] > nums[index]){
        //         swap(nums[i], nums[index]);
        //         break;
        //     }
        // }
        // reverse(nums.begin()+index+1, nums.end());






        int n = nums.size();
        int a = -1;
        for(int i = n-1; i >= 1; i--){
            if(nums[i] > nums[i-1]){
                a = i-1;
                break;
            }
        }
        if(a == -1){
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i = n-1; i > a; i--){
            if(nums[i] > nums[a]){
                swap(nums[i], nums[a]);
                break;
            }
        }
        reverse(nums.begin() + a + 1, nums.end());
        return;

    }
};