// Last updated: 8/19/2025, 8:38:38 PM
class Solution {
public:
    bool doesAliceWin(string s) {
        int l = s.length();
        for(int i = 0; i < l; i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                return true;
            }
        }
        return false;
    }
};