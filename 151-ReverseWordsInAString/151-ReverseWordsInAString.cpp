// Last updated: 10/4/2025, 7:25:59 PM
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string w = "";
        string ans = "";
        for(int i = n-1; i >= 0; i--){
            if(s[i] != ' '){
                w += s[i];
            }
            else if(w != ""){
                reverse(w.begin(), w.end());
                ans += w + ' ';
                w = "";
            }
        }
        reverse(w.begin(), w.end());
        ans += w;
        if(w == ""){
            ans.erase(ans.length()-1, 1);
        }
        return ans;
    }
};