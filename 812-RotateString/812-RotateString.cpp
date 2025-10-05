// Last updated: 10/5/2025, 4:44:05 PM
class Solution {
public:
    bool rotateString(string s, string goal) {
        s += s;
        if(s.find(goal) != string::npos && s.size()/2 == goal.size()){
            return true;
        }
        return false;
    }
};