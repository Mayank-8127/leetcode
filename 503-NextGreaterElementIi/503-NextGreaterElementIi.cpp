// Last updated: 2/11/2026, 4:17:51 PM
class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        vector<int> ans(n);
        
        int mx = INT_MIN;
        int mx_index;
        for(int i = 0; i < n; i++){
            if(nums[i] > mx){
                mx = nums[i];
                mx_index = i;
            }
        }
        ans[mx_index] = -1;
        st.push(mx);
        for(int i = (mx_index-1+n)%n; i != mx_index; i--){
            if(st.empty()){
                ans[i] = -1;
            }else{
                while(!st.empty() && st.top() <= nums[i]){
                    st.pop();
                }
                if(st.empty()){
                    ans[i] = -1;
                }else{
                    ans[i] = st.top();
                }
            }
            st.push(nums[i]);

            if(i == 0) i = n;
        }
        return ans;
    }
};