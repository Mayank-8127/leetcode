// Last updated: 2/22/2026, 7:12:51 PM
class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;

        vector<pair<int,int>> st;
        st.push_back({0,0});

        for(int i = 0; i < n; i++){
            while(st[st.size()-1].first > arr[i]){
                ans = max(ans, st[st.size()-1].first*(i-st[st.size()-2].second));
                st.pop_back();
            }
            st.push_back({arr[i],i+1});
        }

        while(st.size() > 1){
            ans = max(ans, st[st.size()-1].first*(n-st[st.size()-2].second));
            st.pop_back();
        }
        return ans;

    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<int> height(matrix[0].size(), 0);
        int ans = 0;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] == '0'){
                    height[j] = 0;
                }else{
                    height[j]++;
                }
            }
            ans = max(ans, largestRectangleArea(height));
        }
        return ans;
    }
};