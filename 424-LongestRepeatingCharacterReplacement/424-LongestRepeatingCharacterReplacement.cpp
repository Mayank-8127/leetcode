// Last updated: 3/28/2026, 12:19:01 PM
class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> mp(26,0);
        int n = s.size();
        int mx = 0;
        int l = 0;
        int freq = 0;
        for(int r = 0; r < n; r++){
            mp[s[r] - 'A']++;
            freq = max(freq, mp[s[r] - 'A']);
            while(r - l + 1 > freq + k){
                mp[s[l] - 'A']--;
                l++;
            }
            mx = max(mx, r-l+1);
        }
        return mx;        
    }
};