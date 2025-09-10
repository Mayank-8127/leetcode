// Last updated: 9/11/2025, 5:04:13 AM
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int e = n-1, s = 0;
        while(s <= e){
            int m = (s+e)/2;
            if(arr[m] - m - 1 < k){
                s = m+1;
            }else{
                e = m-1;
            }
        }
        int ans = s + k;
        if(arr[n-1] - n < k){
            ans = k + n;
        }
        return ans;
    }
};