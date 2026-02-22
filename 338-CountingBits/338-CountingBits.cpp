// Last updated: 2/22/2026, 7:12:28 PM
class Solution {
public:
    vector<int> countBits(int n) {
        int x = 1;
        int y = 1;
        vector<int> ans;
        ans.push_back(0);
        for(int i = 1; i <= n; i++){
            if(x == 0){
                ans.push_back(1);
                x = i;
                y = i;
            }else{
                ans.push_back(ans[i-y]+1);
            }
            x--;
        }
        return ans;
    }
};