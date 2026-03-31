// Last updated: 3/31/2026, 8:10:55 PM
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end(), greater());
        sort(s.begin(), s.end(), greater());
        int ans = 0;
        int i = 0, j = 0;
        while(i < g.size() && j < s.size()){
            if(s[j] >= g[i]){
                i++;
                j++;
                ans++;
            }else{
                i++;
            }
        }
        return ans;
    }
};