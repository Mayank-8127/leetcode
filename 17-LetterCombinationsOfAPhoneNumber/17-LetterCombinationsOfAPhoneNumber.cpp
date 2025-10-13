// Last updated: 10/13/2025, 4:56:56 PM
void generate(int i, int& n, string s, string& digits, vector<string>& mp, vector<string>& ans){
    if(i == n){
        if(n > 0) ans.push_back(s);
        return;
    }
    int x = digits[i]-48;
    for(int j = 0; j < mp[x].size(); j++){
        generate(i+1, n, s + mp[x][j], digits, mp, ans);
    }
}

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> mp = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        int n = digits.size();
        vector<string> ans;
        string s = "";
        generate(0, n, s, digits, mp, ans);
        return ans;
    }
};