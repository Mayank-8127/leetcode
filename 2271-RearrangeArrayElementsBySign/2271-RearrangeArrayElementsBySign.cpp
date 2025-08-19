// Last updated: 8/19/2025, 8:38:43 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        int size = nums.size();
    //     vector<int> neg, pos;
    //     for(int i = 0; i < size; i++){
    //         if(nums[i] > 0){
    //             pos.push_back(nums[i]);
    //         }else{
    //             neg.push_back(nums[i]);
    //         }
    //     }
    //     nums.clear();
    //     for(int i = 0; i < size/2; i++){
    //         nums.push_back(pos[i]);
    //         nums.push_back(neg[i]);
    //     }
    //     return nums;

        vector<int> ans(size);
        int posi = 0, negi = 1;
        for(int i = 0; i < size; i++){
            if(nums[i] > 0){
                ans[posi] = nums[i];
                posi += 2;
            }else{
                ans[negi] = nums[i];
                negi += 2;
            }
        }
        return ans;

    }

};