class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if (n == 1) return strs[0];
        int curr = strs[0].size();
        for (int i = 1; i < n; i++){
            for (int j = 0; j < curr; j++){
                if (strs[0][j] != strs[i][j]){
                    curr = j;
                }
            }
        }
        if (curr == -1) return "";
        return strs[0].substr(0, curr);
    }
};