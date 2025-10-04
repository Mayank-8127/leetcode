// Last updated: 10/4/2025, 7:25:40 PM
class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size(), f = 0;
        for(int i = n-1; i >= 0; i--){
            if((num[i] - '0') % 2 != 0){
                num.erase(i+1, n-i-1);
                f = 1;
                break;
            }
        }
        if(f == 0) return "";
        return num;
    }
};