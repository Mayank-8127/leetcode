// Last updated: 8/19/2025, 8:39:21 PM
class Solution {
public:
    int reverse(int x) {
        long long a = 0;
        int b, c = 0, d = x;
        if(x > 0){
            while(d > 0){
                d /= 10;
                c++;
            }
            while(x > 0){
                b = x % 10;
                c--;
                a += pow(10,c)* b;
                x /= 10;
            }
        }
        else{
            while(d < 0){
                d /= 10;
                c++;
            }
            while(x < 0){
                b = x % 10;
                c--;
                a += pow(10,c)* b;
                x /= 10;
            }
        }
        if (a >= pow(2, 31) || a < pow(-2, 31)){
            return 0;
        }
        return a;
    }
};