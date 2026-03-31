// Last updated: 3/31/2026, 8:10:48 PM
class Solution {
public:
    bool checkValidString(string s) {
        int a = 0, b = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                a++;
                b++;
            }
            else if(s[i] == '*'){
                a--;
                b++;
            }
            else{
                a--;
                b--;
            }

            if(b < 0){
                return false;
            }
            a = max(a,0);

        }
        if(a == 0) return true;
        return false;
    }
};