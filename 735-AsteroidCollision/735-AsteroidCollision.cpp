// Last updated: 2/12/2026, 5:18:54 PM
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ls;
        for(int i = 0; i < asteroids.size(); i++){
            if(asteroids[i] >= 0){
                ls.push_back(asteroids[i]);
            }else{
                int flag = 0;
                while(!ls.empty() && ls.back() > 0){
                    if(ls.back() < abs(asteroids[i])){
                        ls.pop_back();
                    }else if(ls.back() == abs(asteroids[i])){
                        ls.pop_back();
                        flag = 1;
                        break;
                    }
                    else{
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0){
                    ls.push_back(asteroids[i]);
                }
            }
        }
        return ls;
    }
};