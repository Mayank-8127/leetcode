// Last updated: 3/28/2026, 12:18:45 PM
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int mx = 0;
        int sum = 0;

        for(int i = 0; i < k; i++){
            sum += cardPoints[i];
        }
        mx = sum;
        
        if(k == n) return mx;

        int j = k-1;
        for(int i = n-1; i >= n-k; i--){
            sum -= cardPoints[j];
            sum += cardPoints[i];
            j--;
            mx = max(sum,mx);
        }

        return mx;
    }
};