// Last updated: 10/6/2025, 8:04:58 AM
class Solution {
public:
    int beautySum(string s) {
        int ans = 0;
        for(int i = 0; i < s.size(); i++){
            map<char, int> m;
            for(int j = i; j < s.size(); j++){
                m[s[j]]++;
                int min = 1000, max = 0;
                for (const auto& pair : m) {
                    if(pair.second < min){
                        min = pair.second;
                    }
                    if(pair.second > max){
                        max = pair.second;
                    }
                }
                ans += (max-min);
            }
        }
        return ans;
    }
};