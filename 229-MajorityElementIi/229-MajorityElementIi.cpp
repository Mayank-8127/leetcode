// Last updated: 8/19/2025, 8:38:56 PM
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size(), cnt1 = 0, cnt2 = 0, num1, num2;
        vector<int> arr;
        for(int i = 0; i < n; i++){
            if(cnt1 == 0 && nums[i] != num2){
                num1 = nums[i];
                cnt1 = 1;
            }else if(cnt2 == 0 && nums[i] != num1){
                num2 = nums[i];
                cnt2 = 1;
            }else if(nums[i] == num1){
                cnt1++;
            }else if(nums[i] == num2){
                cnt2++;
            }else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0;
        cnt2 = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == num1) cnt1++;
            else if(nums[i] == num2) cnt2++;
        }
        if(cnt1 > n/3) arr.push_back(num1);
        if(cnt2 > n/3) arr.push_back(num2);
        return arr;
    }
};