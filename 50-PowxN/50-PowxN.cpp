// Last updated: 10/11/2025, 4:56:28 PM
class Solution {
public:
    double myPow(double x, long long n) {
        if(n == 0){
            return 1;
        }
        if(n < 0){
            n *= -1;
            return 1/(x*myPow(x, n-1));
        }
        if(n % 2 == 0){
            return myPow(x*x, n/2);
        }
        return x*myPow(x, n-1);
    }
};