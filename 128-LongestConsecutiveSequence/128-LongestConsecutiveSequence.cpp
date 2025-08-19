// Last updated: 8/19/2025, 8:39:02 PM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(), max = 1, count = 1;
        for(int i = 1; i < n; i++){
            if(nums[i-1] == nums[i]){
                continue;
            }
            else if(nums[i-1] == nums[i] - 1){
                count++;
                if(count > max){
                    max = count;
                }
            }
            else{
                count = 1;
            }
        }
        if(n == 0){
            max = 0;
        }
        return max;

        // unordered_set<int> s;
        // int n = nums.size(), mx = 0, count = 0, current_n;
        // for(int i = 0; i < n; i++){
        //     s.insert(nums[i]);
        // }
        // for(auto it: nums){
        //     if(s.find(it - 1) == s.end()){
        //         current_n = it;
        //         while(s.find(current_n) != s.end()){
        //             count++;
        //             current_n++;
        //         }
        //         mx = max(mx, count);
        //         count = 0;
        //     }
        // }
        // return mx;
    }
};