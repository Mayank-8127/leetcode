// Last updated: 3/31/2026, 8:10:44 PM
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int a = 0, b = 0, c = 0;
        for(int i = 0; i < bills.size(); i++){
            if(bills[i] == 20){
                c++;
                if(b > 0){
                    b--;
                    a--;
                }else{
                    a-=3;
                }
            }else if(bills[i] == 10){
                b++;
                a--;
            }else{
                a++;
            }
            if(a<0 || b<0 || c<0){
                return false;
            }
        }
        return true;


    }
};