// Last updated: 9/11/2025, 12:52:54 PM
class Solution {
public:
    bool isPossible(vector<int>& bloomDay, int m, int k, int mid, int n){
        int cntDay = 0, cntBouquet = 0;
        for(int i = 0; i < n; i++){
            if(bloomDay[i] <= mid){
                cntDay++;
            }else{
                cntDay = 0;
            }
            if(cntDay == k){
                cntDay = 0;
                cntBouquet++;
            }
        }
        if(cntBouquet >= m){
            return true;
        }else{
            return false;
        }
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if((long long)m*k > n){
            return -1;
        }
        int s = 1, e = *max_element(bloomDay.begin(), bloomDay.end()), mid;
        while(s <= e){
            mid = (s+e)/2;
            bool possible = isPossible(bloomDay, m, k, mid, n);
            if(possible){
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }
        return s;
    }
};