// Last updated: 10/15/2025, 3:37:56 PM
void backtrack(vector<string> v, vector<vector<string>>& ans, int& n, int i, vector<int>& columns, vector<int>& diagonals1, vector<int>& diagonals2){
    if(i == n){
        ans.push_back(v);
        return;
    }
    string s = "";
    for(int j = 0; j < n; j++) s += '.';
    for(int j = 0; j < n; j++){
        if(columns[j] == 1 || diagonals1[i+j] == 1 || diagonals2[i-j+n-1] == 1){
            continue;
        }
        columns[j] = 1;
        diagonals1[i+j] = 1;
        diagonals2[i-j+n-1] = 1;
        s[j] = 'Q';
        v.push_back(s);

        backtrack(v, ans, n, i+1, columns, diagonals1, diagonals2);
        
        columns[j] = 0;
        diagonals1[i+j] = 0;
        diagonals2[i-j+n-1] = 0;
        s[j] = '.';
        v.pop_back();
    }
}

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string> v;
        vector<vector<string>> ans;
        vector<int> columns(n, 0);
        vector<int> diagonals1(n+n-1, 0);
        vector<int> diagonals2(n+n-1, 0);
        backtrack(v, ans, n, 0, columns, diagonals1, diagonals2);
        return ans;
    }
};