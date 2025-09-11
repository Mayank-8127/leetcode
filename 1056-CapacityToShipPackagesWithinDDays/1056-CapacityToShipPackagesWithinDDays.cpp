// Last updated: 9/11/2025, 12:52:56 PM
class Solution {
public:
    bool answer(vector<int>& weights, int m, int days){
        int d = 0;
        int cnt = 0;
        for(int i = 0; i < weights.size(); i++){
            cnt += weights[i];
            if(cnt > m){
                d++;
                cnt = weights[i];
            }
        }
        if(cnt > 0){
            d++;
        }
        if(d > days){
            return false;
        }else{
            return true;
        }
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int s = *max_element(weights.begin(), weights.end()), m, e = 0;
        for(int i = 0; i < weights.size(); i++){
            e += weights[i];
        }
        while(s <= e){
            m = (s+e)/2;
            bool ans = answer(weights, m, days);
            if(ans){
                e = m-1;
            }else{
                s = m+1;
            }
        }
        return s;
    }
};