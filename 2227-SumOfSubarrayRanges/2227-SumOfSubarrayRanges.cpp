// Last updated: 2/12/2026, 5:18:41 PM
class Solution {
public:
    long long subArrayRanges(vector<int>& arr) {
        int n = arr.size();
        vector<int> pse(n);
        vector<int> nsee(n);
        vector<int> pge(n);
        vector<int> ngee(n);

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
        stack<pair<int,int>> st3;
        for(int i = 0; i < n; i++){
            if(st3.empty()){
                pge[i] = 0;
            }else{
                while(!st3.empty() && st3.top().first < arr[i]){
                    st3.pop();
                }
                if(st3.empty()){
                    pge[i] = 0;
                }else{
                    pge[i] = st3.top().second;
                }
            }
            st3.push({arr[i],i+1});
        }
        stack<pair<int,int>> st4;
        for(int i = n-1; i >= 0; i--){
            if(st4.empty()){
                ngee[i] = n+1;
            }else{
                while(!st4.empty() && st4.top().first <= arr[i]){
                    st4.pop();
                }
                if(st4.empty()){
                    ngee[i] = n+1;
                }else{
                    ngee[i] = st4.top().second;
                }
            }
            st4.push({arr[i],i+1});
        }

        long long ans = 0;
        for(int i = 0; i < n; i++){
            // cout << pse[i] << ' ' << nsee[i] << '\n';
            // cout <<  (arr[i] * ((nsee[i] - i - 1)*(i - pse[i] + 1))) << '\n';
            ans = ans - (long long)arr[i] * ((nsee[i] - i - 1)*(i - pse[i] + 1));
            ans = ans + (long long)arr[i] * ((ngee[i] - i - 1)*(i - pge[i] + 1));
        }
        return ans;
    }
};