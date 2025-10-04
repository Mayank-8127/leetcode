// Last updated: 10/4/2025, 7:25:55 PM
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> mpp;
        vector<char> a;
        for(int i = 0; i < s.length(); i++){
            if(!mpp.contains(s[i])){
                auto it = find(a.begin(), a.end(), t[i]);
                if(it == a.end()){
                    mpp[s[i]] = t[i];
                    a.push_back(t[i]);
                }
                else{
                    return false;
                }
            }
            else if (mpp.contains(s[i]) && mpp[s[i]] != t[i]){
                return false;
            }
        }
        return true;
    }
};