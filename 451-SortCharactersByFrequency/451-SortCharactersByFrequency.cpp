// Last updated: 10/5/2025, 4:44:10 PM
bool sortOnSecond(pair<char, int>a, pair<char, int>b){
    return a.second > b.second;
}
    
class Solution {
public:
    string frequencySort(string s) {
        map<char, int> m;
        vector<pair<int,int>> p;
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            m[s[i]]++;
        }
        for (const auto& pair : m) {
            p.push_back(pair);
        }
        sort(p.begin(), p.end(), sortOnSecond);
        for(int i = 0; i < p.size(); i++){
            for(int j = 0; j < p[i].second; j++){
                ans += p[i].first;
            }
        }
        return ans;
    }
};