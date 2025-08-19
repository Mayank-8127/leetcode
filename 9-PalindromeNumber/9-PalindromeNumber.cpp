// Last updated: 8/19/2025, 8:39:19 PM
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        string s = to_string(x);
        int a = s.length();
        for(int i = 0; i < a/2; i++){
            if(s[i] != s[a-i-1]){
                return false;
            }
        }
        return true;
    }
};