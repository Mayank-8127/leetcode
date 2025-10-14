// Last updated: 10/15/2025, 2:24:41 AM
bool isPalindrome(string t){
    bool b = true;
    for(int i = 0; i < t.size()/2; i++){
        if(t[i] != t[t.size() - i - 1]){
            b = false;
            break;
        }
    }
    return b;
}

void generate(int i, int& n, string& s, string t, vector<string> v, vector<vector<string>>& ans){
    if(i == n){
        if(t == "") ans.push_back(v);
        return;
    }

    t += s[i];
    if(isPalindrome(t)){
        v.push_back(t);
        generate(i+1, n, s, "", v, ans);
        v.pop_back();
    }
    generate(i+1, n, s, t, v, ans);
}

class Solution {
public:
    vector<vector<string>> partition(string s) {
        int n = s.size();
        int i = 0;
        vector<string> v;
        vector<vector<string>> ans;
        generate(i, n, s, "", v, ans);
        return ans;
    }
};