// Last updated: 8/19/2025, 8:38:48 PM
class Solution {
public:
    int sum = 0;
    int fib(int n) {
        if(n == 0 || n == 1){
            return n;
        }
        else{
            return fib(n-1) + fib(n-2);
        }
    }
};