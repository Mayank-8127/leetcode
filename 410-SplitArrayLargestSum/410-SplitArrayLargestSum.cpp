// Last updated: 9/14/2025, 3:54:07 PM
class Solution {
public:
    bool distributionPossible(vector<int> &nums, int k, int m, int n){
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += nums[i];
            if(sum > m){
                k--;
                sum = nums[i];
            }
            if(k == 0){
                return false;
            }
        }
        return true;
    }
    

    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if(n < k) return -1;
        int s = *max_element(nums.begin(), nums.end()), m, e = 0;
        
        for(int i = 0; i < n; i++){
            e += nums[i];
        }
        while(s <= e){
            m = (s+e)/2;
            if(distributionPossible(nums, k, m, n) == true){
                e = m-1;
            }
            else{
                s = m+1;
            }
        }
        return s;
    }
};