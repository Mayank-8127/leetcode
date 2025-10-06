// Last updated: 10/6/2025, 7:44:59 AM
class Solution {
public:
    string longestPalindrome(string s) {
        int size = s.size();
        string mx = "";
        for(int i = 0; i < size; i++){
            for(int j = i; j < size; j++){
                // string t = s.substr(i, j-i+1);
                // string tinv(t.rbegin(), t.rend());
                int flag = 0;
                for(int k = 0; k <= (j-i)/2; k++){
                    if(s[i+k] != s[j-k]){
                        flag = 1;
                        break;
                    }
                }
                if(flag){
                    continue;
                }
                if(j-i+1 > mx.size()){
                    mx = s.substr(i, j-i+1);
                }
                // if(t == tinv && t.size() > mx.size()){
                //     mx = t;
                // }

            }
        }
        return mx;
    }
};