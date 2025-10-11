// Last updated: 10/11/2025, 7:50:44 PM
void generate(int n, string s, int c, vector<string>& v){
    if(n == 0 && c == 0){
        v.push_back(s);
        return;
    }
    if(n > 0){
        generate(n-1, s+"(", c+1, v);
    }
    if(c > 0){
        generate(n, s+")", c-1, v);
    }
    return;
}

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        string s = "";
        int c = 0;
        vector<string> v;
        generate(n, s, c, v);
        return v;
    }
};