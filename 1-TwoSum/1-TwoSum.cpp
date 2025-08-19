// Last updated: 8/19/2025, 8:39:22 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        int size = nums.size();
        // for(int i = 0; i < size; i++){
        //     int req = target - nums[i];
        //     for(int j = i + 1; j < size; j++){
        //         if(nums[j] == req){
        //             vector<int> a = {i,j};
        //             return a;
        //         }
        //     }
        // }
        // vector<int> b;
        // return b;


        // map<int,int> mpp;
        // for(int i = 0; i < size; i++){
        //     if(mpp.find(target - nums[i]) != mpp.end()){
        //         return vector<int> {i, mpp[target - nums[i]]};
        //     }
        //     mpp[nums[i]] = i;
        // }
        // return vector<int> {};


        map<int, int> m;
        vector<int> v;
        for(int i = 0; i < size; i++){
            if(m.find(target-nums[i]) != m.end()){
                v.push_back(m[target - nums[i]]);
                v.push_back(i);
                return v;
            }
            m[nums[i]] = i;
        }
        return v;
    }
};