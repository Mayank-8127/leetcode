// Last updated: 3/28/2026, 12:18:46 PM
class Solution {
public:
    int numberOfSubstrings(string s) {
        int a = -1, b = -1, c = -1;
        int size = s.size();
        int count = 0;
        int r = 0;
        while(r < size){
            if(s[r] == 'a'){
                a = r;
            }else if(s[r] == 'b'){
                b = r;
            }else{
                c = r;
            }
            count = count + 1 + min(a,min(b,c));
            r++;
        }
        return count;
    }
};