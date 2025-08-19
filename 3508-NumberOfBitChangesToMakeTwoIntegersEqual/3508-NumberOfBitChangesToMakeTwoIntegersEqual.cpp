// Last updated: 8/19/2025, 8:38:31 PM
class Solution {
public:
    int minChanges(int n, int k) {
        int o = 0;
        if(n == k){
            return o; 
        }
        if(n < k){
            o--;
            return o;
        }
        int arrn[20];
        int arrk[20];
        for(int i = 0; i < 20; i++){
            arrn[i] = n % 2;
            arrk[i] = k % 2;
            n = n / 2;
            k = k / 2;
            if(arrn[i] == arrk[i]){
                continue;
            }
            else if(arrn[i] == 1 && arrk[i] == 0){
                o++;
            }
            else{
                o = -1;
                return o;
            }
        }
        return o;
    }
};