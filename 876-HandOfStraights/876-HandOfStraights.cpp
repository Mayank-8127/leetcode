// Last updated: 3/28/2026, 12:18:54 PM
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(n%groupSize != 0) return false;
        if(groupSize == 1) return true;

        map<int,int> mp;
        for(int i = 0; i < n; i++){
            mp[hand[i]]++;
        }
        
        vector<pair<int,int>> v;
        for(const auto& it : mp){
            v.push_back(it);
        }

        for(int i = 0; i < v.size(); i++){
            if(v[i].second == 0) continue;
            else{
                if(i+groupSize > v.size()) return false;
                int temp = v[i].second;
                for(int j = 0; j < groupSize; j++){
                    v[i+j].second -= temp;
                    if(v[i+j].second < 0){
                        return false;
                    }
                }
                for(int j = 0; j < groupSize-1; j++){
                    if(v[i+j].first + 1 != v[i+j+1].first) return false;
                }
            }
        }
        return true;
    }
};