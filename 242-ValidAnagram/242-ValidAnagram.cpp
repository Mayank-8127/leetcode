// Last updated: 10/4/2025, 7:25:53 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mpp;
        map<char, int> mp;
        if(s.size() != t.size()){
            return false;
        }
        for(int i = 0; i < s.size(); i++){
            mpp[s[i]]++;
            mp[t[i]]++;
        }
        if(mp == mpp){
            return true;
        }
        return false;
    }
};