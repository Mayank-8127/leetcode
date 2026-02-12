// Last updated: 2/12/2026, 5:18:51 PM
class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> pse(n);
        vector<int> nsee(n);

        stack<pair<int,int>> st;
        for(int i = 0; i < n; i++){
            if(st.empty()){
                pse[i] = 0;
            }else{
                while(!st.empty() && st.top().first > arr[i]){
                    st.pop();
                }
                if(st.empty()){
                    pse[i] = 0;
                }else{
                    pse[i] = st.top().second;
                }
            }
            st.push({arr[i],i+1});
        }
        stack<pair<int,int>> st2;
        for(int i = n-1; i >= 0; i--){
            if(st2.empty()){
                nsee[i] = n+1;
            }else{
                while(!st2.empty() && st2.top().first >= arr[i]){
                    st2.pop();
                }
                if(st2.empty()){
                    nsee[i] = n+1;
                }else{
                    nsee[i] = st2.top().second;
                }
            }
            st2.push({arr[i],i+1});
        }

        int ans = 0;
        for(int i = 0; i < n; i++){
            // cout << pse[i] << ' ' << nsee[i] << '\n';
            // cout <<  (arr[i] * ((nsee[i] - i - 1)*(i - pse[i] + 1))) << '\n';
            ans = ans + ((long long)arr[i] * ((nsee[i] - i - 1)*(i - pse[i] + 1)))% 1000000007;
            ans = ans % 1000000007;
        }
        return ans;
    }
};