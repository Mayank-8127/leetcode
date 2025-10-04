// Last updated: 10/4/2025, 7:25:45 PM
class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        int c = 0;
        string ans = "";
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                c++;
                if(c != 1){
                    ans += '(';
                }
            }else{
                c--;
                if(c != 0){
                    ans += ')';
                }
            }
        }
        return ans;
    }
};