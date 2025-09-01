// Last updated: 9/2/2025, 3:46:49 AM
class Solution {
public:
    void countFunction(vector<int> a1, vector<int> a2, int n1, int n2, int& count){
        int j = 0;
        for(int i = 0; i < n1; i++){
            while(j < n2 && (long long)a1[i] > (long long)2*a2[j]){
                j++;
            }
            count += j;
        }
    }

    void merge(vector<int>& arr, int l, int m, int h, int& count){
        int n1 = m-l+1;
        int n2 = h-m;
        vector<int> a1(n1), a2(n2);
        for(int i = 0; i < n1; i++){
            a1[i] = arr[l+i];
        }
        for(int i = 0; i < n2; i++){
            a2[i] = arr[m+1+i];
        }
        
        countFunction(a1, a2, n1, n2, count);
        
        int i = 0, j = 0;
        while(i < n1 && j < n2){
            if(a1[i] < a2[j]){
                arr[l] = a1[i];
                l++;
                i++;
            }else{
                arr[l] = a2[j];
                j++;
                l++;
            }
        }
        
        while(i < n1){
            arr[l] = a1[i];
            l++;
            i++;
        }
        
        while(j < n2){
            arr[l] = a2[j];
            l++;
            j++;
        }
        
    }
    
    void mergeSort(vector<int>& arr, int l, int h, int& count){
        if(h <= l) return;
        int m = (l+h)/2;
        mergeSort(arr, l, m, count);
        mergeSort(arr, m+1, h, count);
        
        merge(arr, l , m, h, count);
    }

    int reversePairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        mergeSort(nums, 0, n-1, count);
        return count;
    }
};

  
