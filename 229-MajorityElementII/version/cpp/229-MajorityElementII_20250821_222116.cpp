// Last updated: 8/21/2025, 10:21:16 PM
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // int n = nums.size(), cnt1 = 0, cnt2 = 0, num1, num2;
        // vector<int> arr;
        // for(int i = 0; i < n; i++){
        //     if(cnt1 == 0 && nums[i] != num2){
        //         num1 = nums[i];
        //         cnt1 = 1;
        //     }else if(cnt2 == 0 && nums[i] != num1){
        //         num2 = nums[i];
        //         cnt2 = 1;
        //     }else if(nums[i] == num1){
        //         cnt1++;
        //     }else if(nums[i] == num2){
        //         cnt2++;
        //     }else{
        //         cnt1--;
        //         cnt2--;
        //     }
        // }
        // cnt1 = 0;
        // cnt2 = 0;
        // for(int i = 0; i < n; i++){
        //     if(nums[i] == num1) cnt1++;
        //     else if(nums[i] == num2) cnt2++;
        // }
        // if(cnt1 > n/3) arr.push_back(num1);
        // if(cnt2 > n/3) arr.push_back(num2);
        // return arr;






        int n = nums.size(), c1 = 0, c2 = 0, num1, num2;
        for(int i = 0; i < n; i++){
            if(c1 == 0 && nums[i] != num2){
                c1++;
                num1 = nums[i];
            }
            else if(c2 == 0 && nums[i] != num1){
                c2++;
                num2 = nums[i];
            }
            else if(nums[i] == num1){
                c1++;
            }
            else if(nums[i] == num2){
                c2++;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1 = 0;
        c2 = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == num1){
                c1++;
            }
            else if(nums[i] == num2){
                c2++;
            }
        }

        vector<int> ans;
        if(c1 > n/3){
            ans.push_back(num1);
        }
        if(c2 > n/3){
            ans.push_back(num2);
        }

        return ans;

















    }
};