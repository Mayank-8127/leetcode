// Last updated: 10/4/2025, 7:28:38 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string common = strs[0];
        for(int i = 1; i < n; i++){
            int size = min(strs[i].size(), common.size());
            if(common.size() > strs[i].size()){
                string temp = common;
                common = strs[i];
                strs[i] = temp;
            }
            for(int j = 0; j < size; j++){
                if(strs[i][j] != common[j]){
                    common.erase(j);
                    break;
                }
            }
        }
        return common;
    }
};