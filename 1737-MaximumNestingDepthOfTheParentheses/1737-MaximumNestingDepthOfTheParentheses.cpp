// Last updated: 10/5/2025, 4:44:00 PM
class Solution {
public:
    int maxDepth(string s) {
        int count = 0, mx = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                count++;
                mx = max(count, mx);
            }
            else if(s[i] == ')'){
                count--;
            }
        }
        return mx;
    }
};