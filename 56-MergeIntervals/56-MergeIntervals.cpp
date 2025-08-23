// Last updated: 8/23/2025, 8:09:10 PM
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        vector<vector<int>> ans;
        for(int i = 0; i < n; i++){
            int end = intervals[i][1];
            vector<int> v;
            v.push_back(intervals[i][0]);
            while(i < n-1 && end >= intervals[i+1][0]){
                i++;
                end = max(end,intervals[i][1]);
            }
            v.push_back(end);
            ans.push_back(v);
        }
        return ans;
    }
};