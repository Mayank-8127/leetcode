// Last updated: 8/19/2025, 8:38:41 PM
class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        long long count = 0;
        int x = hours.size();
        pair<int,long long> hc[24];
        for(int i = 0; i < x; i++){
            hours[i] = hours[i] % 24;
            hc[hours[i]].second++;
        }
        count += ((hc[0].second) * (hc[0].second - 1))/2;
        count += ((hc[12].second) * (hc[12].second - 1))/2;
        for(int i = 1; i < 12; i++){
            count += (hc[i].second * hc[24-i].second);
        }
        return count;
    }
};