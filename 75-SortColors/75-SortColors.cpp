// Last updated: 8/19/2025, 8:39:09 PM
class Solution {
public:
    void sortColors(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        // int a = 0, b = 0;
        // int c = nums.size() - 1;
        // int size = nums.size();
        // for(int i = 0; i < size; i++){
        //     if(nums[i] == 0) a++;
        //     else if(nums[i] == 1) b++;
        //     else c++;
        // }
        // b += a;
        // for(int i = 0; i < size; i++){
        //     if(i < a) nums[i] = 0;
        //     else if(i < b) nums[i] = 1;
        //     else nums[i] = 2;
        // }
        // while(b <= c){
        //     if(nums[b] == 0){
        //         swap(nums[a], nums[b]);
        //         b++;
        //         a++;
        //     }
        //     else if(nums[b] == 1){
        //         b++;
        //     }
        //     else{
        //         swap(nums[b], nums[c]);
        //         c--;
        //     }
        // }




        int a = 0, b = 0, c = nums.size() - 1;
        while(b <= c){
            if(nums[b] == 0){
                swap(nums[a], nums[b]);
                a++;
                b++;
            }else if(nums[b] == 1){
                b++;
            }else{
                swap(nums[b], nums[c]);
                c--;
            }
        }
    }
};