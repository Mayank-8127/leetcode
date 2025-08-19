// Last updated: 8/19/2025, 8:38:59 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        // sort(nums.begin(), nums.end());
        // return nums[nums.size()/2];

        // map<int, int> mpp;
        // int size = nums.size(), ele = nums[0], count = 1;
        // for(int i = 0; i < size; i++){
        //     mpp[nums[i]]++;
        // }
        // for(auto it: mpp){
        //     if(it.second > size/2){
        //         return it.first;
        //     }
        // }
        // return 0;
        
        // for(int i = 1; i < size; i++){
        //     if(count == 0){
        //         ele = nums[i];
        //         count++;
        //     }
        //     else if(nums[i] == ele){
        //         count++;
        //     }else{
        //         count--;
        //     }
        // }
        // return ele;



        int n = nums.size();
        int ele = nums[0];
        int count = 1;
        for(int i = 1; i < n; i++){
            if(nums[i] == ele){
                count++;
            }else if(count == 1){
                ele = nums[i];
            }else{
                count--;
            }
        }
        return ele;
    }
};
