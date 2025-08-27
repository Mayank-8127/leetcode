// Last updated: 8/28/2025, 2:38:06 AM
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int h = 0; h < n; h++){
            if(h > 0 && nums[h] == nums[h-1]) continue;
            for(int i = h+1; i < n; i++){
                if(i > h+1 && nums[i] == nums[i-1]) continue;
                int j = i+1, k = n - 1;
                while(j < k){
                    long long sum = (long long)nums[h] + nums[i] + nums[j] + nums[k];
                    if(sum > target){
                        k--;
                    }else if(sum < target){
                        j++;
                    }else{
                        vector<int> v = {nums[h], nums[i], nums[j], nums[k]};
                        k--;
                        j++;
                        ans.push_back(v);
                        while(j < k && nums[j] == nums[j-1]){
                            j++;
                        }
                        while(j < k && nums[k] == nums[k+1]){
                            k--;
                        }
                    }
                }
            }
        }
        return ans;
    }
};