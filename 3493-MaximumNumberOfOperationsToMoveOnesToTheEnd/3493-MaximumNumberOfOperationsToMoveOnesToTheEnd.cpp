// Last updated: 8/19/2025, 8:38:32 PM
class Solution {
public:
    int maxOperations(string s) {
        int x = 0;
        int count = 0;
        int range = s.length();
        int flag = 0;
        for(int i = 0; i < range; i++){
            if(s[i] == '1'){
                x++;
                flag = 0;
            }
            else{
                if(flag){
                    continue;
                }
                flag = 1;
                count += x;
            }
        }
        return count;
    }
};