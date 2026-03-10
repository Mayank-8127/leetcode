// Last updated: 3/11/2026, 2:43:48 AM
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        if(n < 3) return n;

        int l = 0, r = 1, mx = 2;
        int li = l, ri = r, x = fruits[l], y = fruits[r];
        while(r < n){
            while(r < n && fruits[l] == fruits[r]){
                li = r;
                r++;
                ri = r;
                if(r == n) break;
                y = fruits[r];
            }
            if(r==n)break;
            while(r < n && (fruits[r] == x || fruits[r] == y)){
                if(fruits[r] == x) li = r;
                else ri = r;
                r++;
            }
            mx = max(r-l, mx);
            l = min(li+1,ri+1);
            li = max(li,ri);
            x = fruits[l];
            if(r != n) y = fruits[r];
        }
        mx = max(r-l, mx);
        return mx;
        // if(fruits.size() < 3) return fruits.size();

        // int c = 1, mx = 1;
        // int x = fruits[0], y = fruits[0], yi = 0, xi = 0;
        // for(int i = 0; i < fruits.size(); i++){
        //     while(x == y && i < fruits.size()-1){
        //         i++;
        //         y = fruits[i];
        //         yi = i;
        //         c++;
        //     }
        //     i++;
        //     while(i < fruits.size() && (fruits[i] == x || fruits[i] == y)){
        //         i++;
        //         c++;
        //     }
        //     mx = max(c, mx);
        //     if(i == fruits.size()) break;
        //     x = y;
        //     i = yi;
        //     c = 1;
        // }
        //     int n = fruits.size();
        //     int l = 0, i = 1;
        //     int mx = 0;
        //     while(i < n){
        //         int xi = l, yi = i;
        //         while(i < n && fruits[l] == fruits[i]){
        //             xi = i;
        //             i++;
        //             yi = i;
        //         }
        //         if(i == n) break;
        //         int x = fruits[l], y = fruits[i];
        //         while(i < n && (fruits[i] == x || fruits[i] == y)){
        //             if(fruits[i] == x){
        //                 xi = i;
        //             }else{
        //                 yi = i;
        //             }
        //             i++;
        //         }
        //         mx = max(i-l, mx);
        //         l = xi+1;
        //     }

        // mx = max(i-l, mx);
        // return mx;
    }
};