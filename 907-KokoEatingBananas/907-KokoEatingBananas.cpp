// Last updated: 9/9/2025, 4:56:47 PM
class Solution {
public:
    int answer(vector<int>& piles, int k){
        long long ans = 0;
        for(int i = 0; i < piles.size(); i++){
            ans += (((long long)piles[i]+k-1)/k);
        }
        return ans;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long s = 1, e = 1000000000, m, ans;
        while(s < e){
            m = s + (e-s)/2;
            if(answer(piles, m) > h){
                s = m+1;
            }else if(answer(piles, m) <= h){
                e = m;
                ans = m;
            }
        }
        return s;
    }
};