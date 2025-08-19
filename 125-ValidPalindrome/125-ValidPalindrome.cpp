// Last updated: 8/19/2025, 8:39:03 PM
class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v;
        for(int i = s.length() - 1; i >= 0; i--){
            if(iswalnum(s[i])){
                v.push_back(tolower(s[i]));
            }
        }
        int size = v.size() - 1;
        for(int i = 0; i <= size; i++){
            if(v[i] != v[size - i]){
                return false;
            }
        }
        return true;
    }
};