// Last updated: 8/19/2025, 8:39:04 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        // int mini = 1000000, profit = 0, size = prices.size();
        // for(int i = 0; i < size; i++){
        //     int x = prices[i];
        //     mini = min(x,mini);
        //     profit = max(x-mini, profit);
        // }
        // return profit;




























        int profit = 0;
        int current_smallest = prices[0];
        int n = prices.size();
        for(int i = 1; i < n; i++){
            if(prices[i]-current_smallest > profit){
                profit = prices[i]-current_smallest;
            }
            if(prices[i] < current_smallest){
                current_smallest = prices[i];
            }
        }
        return profit;
    }
};