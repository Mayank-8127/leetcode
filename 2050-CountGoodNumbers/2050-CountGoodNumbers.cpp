// Last updated: 10/11/2025, 6:10:37 PM
long long myPow(long long x, long long n, long long M) {
    if(n == 0){
        return 1;
    }

    x %= M;

    if(n % 2 == 0){
        return myPow(x*x, n/2, M)%M;
    }
    return (x*myPow(x, n-1, M))%M;
}


class Solution {
public:
    int countGoodNumbers(long long n) {
        long long M = 1e9 + 7;
        long long even = (n+1)/2;
        long long odd = n/2;
        long long ans = (myPow(5, even, M) * myPow(4, odd, M)) %M;
        return ans;
    }
};