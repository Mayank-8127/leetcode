// Last updated: 8/19/2025, 8:38:40 PM
class Solution {
public:

    int countCompleteDayPairs(vector<int>& hours) {
        pair<int,int> pair1;
        int a = 0;
        int x = hours.size();
        for(int i = 0; i < x; i++){
            for(int j = 0; j < i; j++){
                if ((hours[j] + hours[i]) % 24 == 0){
                    pair1 = make_pair(hours[i], hours[j]);
                    a++;
                }
            }
        }
        return a;
        
    }
};