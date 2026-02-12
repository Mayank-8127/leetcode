// Last updated: 2/12/2026, 5:19:00 PM
class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k >= num.size() || num == "0"){
            return "0";
        }
        int c = 0;
        stack<char> st;
        for(int i = 0; i < num.size(); i++){
            while(!st.empty() && st.top() > num[i] && k > 0){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k > 0){
            st.pop();
            k--;
        }
        if(st.empty()) return "0";
        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        while(ans != "" && ans[ans.size()-1] == '0'){
            ans.pop_back();
        }
        if(ans == "") return "0";
        reverse(ans.begin(), ans.end());
        return ans;
    }
};