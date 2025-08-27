// Last updated: 8/28/2025, 2:38:00 AM
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = m+n-1; i > n-1; i--){
            nums1[i] = nums1[i-n];
        }
        int p1 = n, p2 = 0;
        for(int i = 0; i < m+n; i++){
            if(p1 > m+n-1){
                nums1[i] = nums2[p2];
                p2++;
            }else if(p2 > n-1){
                nums1[i] = nums1[p1];
                p1++;
            }else if(nums1[p1] <= nums2[p2]){
                nums1[i] = nums1[p1];
                p1++;
            }else{
                nums1[i] = nums2[p2];
                p2++;
            }
        }

    }
};