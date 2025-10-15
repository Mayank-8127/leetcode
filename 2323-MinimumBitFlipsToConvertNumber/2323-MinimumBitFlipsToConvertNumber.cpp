// Last updated: 10/15/2025, 6:05:03 PM
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int x = start^goal;
        int c = 0;
        while(x != 0){
            x = x & (x-1);
            c++;
        }
        return c;
    }
};