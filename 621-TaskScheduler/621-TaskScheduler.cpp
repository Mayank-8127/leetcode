// Last updated: 3/31/2026, 8:10:50 PM
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {

        map<int,int> mp;
        for(int i = 0; i < tasks.size(); i++){
            mp[tasks[i] - 'A']++;
        }
        
        priority_queue<int> pq;
        for(const auto& it : mp){
            pq.push(it.second);
        }
        vector<int> v;
        int ans = 0;
        int tn = n;
        while(!pq.empty() || !v.empty()){
            if(v.empty()){
                tn = n;
                if(pq.top() > 1){
                    v.push_back(pq.top() - 1);
                }
                pq.pop();
                ans++;
            }else if(tn > 0){
                if(!pq.empty()){
                    if(pq.top() > 1){
                        v.push_back(pq.top() - 1);
                    }
                    pq.pop();
                }
                ans++;
                tn--;
            }else{
                for(const auto& it : v){
                    pq.push(it);
                }
                v = {};
            }
        }
        return ans;
    }
};