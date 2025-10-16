// Last updated: 10/17/2025, 2:26:38 AM
class Solution {
public:
    int divide(long long dividend, long long divisor) {
        long long ans = 0;

        if(dividend == 0) return 0;
        long long n = abs(dividend);
        long long d = abs(divisor);
        long long x = 1;
        while(n >= d){
            long long c = 0;
            while(n >= (d << (c+1))){
                c++;
            }
            n -= (d << c);
            ans += (x << c);
        }
        if(dividend < 0 && divisor > 0) ans = -ans;
        if(dividend > 0 && divisor < 0) ans = -ans;

        if(ans > INT_MAX) return INT_MAX;
        if(ans < INT_MIN) return INT_MIN;
        return ans;
    }
};