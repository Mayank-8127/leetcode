// Last updated: 10/5/2025, 5:30:49 PM
class Solution {
public:
    int myAtoi(string s) {
        long long ans = 0;
        int sign = 1;
        int i = 0;
        int size = s.size();
        
        while(i < size){
            if(s[i] == ' '){
                i++;
            }
            else{
                break;
            }
        }
        if(i == size){
            return 0;
        }

        if(s[i] == '-'){
            sign = -1;
            i++;
        }else if(s[i] == '+'){
            i++;
        }
        if(i == size){
            return 0;
        }

        while(i < size && s[i] - '0' <= 9 && s[i] - '0' >= 0){
            ans *= 10;
            ans = ans + (s[i] - '0');
            i++;
            if(ans >= INT_MAX && sign == 1){
                return INT_MAX;
            }
            if(ans*sign <= INT_MIN && sign == -1){
                return INT_MIN;
            }
        }
        return ans*sign;
    }
};