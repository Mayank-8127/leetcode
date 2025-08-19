// Last updated: 8/19/2025, 8:38:57 PM
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        k = k%nums.size();
        // if(k > 0 && nums.size() > 1){
        //     int arr[k];
        //     for(int i = nums.size() - 1, j = k; i > nums.size() - 1 - k; i--){
        //         arr[j-1] = nums[i];
        //         j--;
        //     }
        //     for(int i = nums.size() - 1 - k; i >= 0; i--){
        //         nums[i + k] = nums[i];
        //     }
        //     for(int i = 0; i < k; i++){
        //         nums[i] = arr[i];
        //     }
        // }


        // reverse(nums.begin(), nums.end());
        // reverse(nums.begin(), nums.begin() + k);
        // reverse(nums.begin() + k, nums.end());
        int n = nums.size();
        ::rotate(nums.begin(), nums.begin()+n-k , nums.end());
    }
};