// Last updated: 9/11/2025, 4:27:19 AM
class Solution {
public:
    int answer(vector<int>& nums, int k){
        long long ans = 0;
        for(int i = 0; i < nums.size(); i++){
            ans += (((long long)nums[i]+k-1)/k);
        }
        return ans;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        long long s = 1, e = 1000000000, m;
        while(s < e){
            m = s + (e-s)/2;
            if(answer(nums, m) > threshold){
                s = m+1;
            }else{
                e = m;
            }
        }
        return s;
    }
};