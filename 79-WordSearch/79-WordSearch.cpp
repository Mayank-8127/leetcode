// Last updated: 10/15/2025, 4:48:02 AM
bool generate(vector<vector<char>> board, string& word, int& m, int& n, vector<vector<int>> indices, int i, int j){
    if(indices.size() == word.size()){
        return true;
    }

    if(indices[indices.size() - 1][0] > 0){
        if(board[i-1][j] == word[indices.size()]){
            indices.push_back({i-1, j});
            board[i-1][j] = '0';
            bool b = generate(board, word, m, n, indices, i-1, j);
            board[i-1][j] = word[indices.size()-1];
            if(b == true) return true;
            indices.pop_back();
        }
    }
    if(indices[indices.size() - 1][0] < m - 1){
        if(board[i+1][j] == word[indices.size()]){
            indices.push_back({i+1, j});
            board[i+1][j] = '0';
            bool b = generate(board, word, m, n, indices, i+1, j);
            board[i+1][j] = word[indices.size()-1];
            if(b == true) return true;
            indices.pop_back();
        }
    }
    if(indices[indices.size() - 1][1] > 0){
        if(board[i][j-1] == word[indices.size()]){
            indices.push_back({i, j-1});
            board[i][j-1] = '0';
            bool b = generate(board, word, m, n, indices, i, j-1);
            board[i][j-1] = word[indices.size()-1];
            if(b == true) return true;
            indices.pop_back();
        }
    }
    if(indices[indices.size() - 1][1] < n - 1){
        if(board[i][j+1] == word[indices.size()]){
            indices.push_back({i, j+1});
            board[i][j+1] = '0';
            bool b = generate(board, word, m, n, indices, i, j+1);
            board[i][j+1] = word[indices.size()-1];
            if(b == true) return true;
            indices.pop_back();
        }
    }

    return false;
}

class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int c = 0;
        while(c < word.size() - 1 && word[c] == word[c+1]){
            c++;
        }
        if(c > 7) reverse(word.begin(), word.end());
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> indices;
        bool ans = false;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(board[i][j] == word[0]){
                    indices.push_back({i,j});
                    board[i][j] = '0';
                    ans = generate(board, word, m, n, indices, i, j);
                    board[i][j] = word[0];
                    if(ans == true) return ans;
                    indices.pop_back();
                }
            }
        }
        return ans;
    }
};